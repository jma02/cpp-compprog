#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n, k, b, s; cin >> n >> k >> b >> s;
    
    ll l = b*k, r = l+k-1;
    if(s>=l && s <=r){
        for(int i = 0; i < n-1; i++){
            cout<<"0 ";
        }
        cout<<s<<'\n';
    }
    else if(s < l){
        cout << -1 << '\n'; 
    }
    else{
        ll comp = s-r;
        ll u  = k-1;
        vector<ll> cand;
        while(cand.size()<(n-1)){
            if(comp < u){
                cand.push_back(comp);
                break;
            }
            cand.push_back(u);
            comp-=u;
        }
        if(std::accumulate(cand.begin(), cand.end(), 0LL)<s-r){
            cout << "-1\n";
            return;
        }
        else{
            for(int i = 0; i < cand.size(); i++){
                cout<<cand[i]<<" ";
            }
            for(int i = cand.size()+1; i < n; i++){
                cout << "0 ";
            }
            cout<<r<<'\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

