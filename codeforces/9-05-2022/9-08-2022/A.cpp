#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;

    vector<ll> ans(n);
    map<ll,ll> pos;

    for(int i = 0; i < n; i++)cin >> ans[i];
    for(ll i = 0; i < n; i++){
        pos[ans[i]] = i+1;
    }
    sort(ans.begin(), ans.end());
    for(ll i = 0; i < n; i++){
        pos[i] = pos[ans[i]];
    }
    for(ll i = 0; i < n-1; i++){
        while(ans[i] > 0 && ans[i+1]>0){
            ans[i]--;
            ans[i+1]--;
        }
    }
    
    for(ll i = 0; i < n; i++){
        if(ans[i] > 0){
            cout << pos[i] << '\n';
            break;
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

