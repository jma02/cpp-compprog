#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    map<ll,ll> occ;
    for(auto &i : a){
        cin >> i;
        occ[i]++;
    }
    ll ans=0;
    for(auto [k,v] : occ){
        if(v < c)ans+=v;
        else ans+=c;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

