#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> p(n);
    for(ll &i : p) cin >> i;
    vector<ll> pref(n+1);
    ll sum = 0;
    for(int i = 1; i < n; i++){
        sum+= p[i-1];
        pref[i] = sum;
    }
    map<ll,ll> occ;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        if(occ.count(pref[i])) occ[pref[i]]++;
        else occ[pref[i]] = 1;
    }
    for(auto i : occ){
        if(i.first > 0) ans+= i.second - 1;
    }
    ans += pref[n-1];
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >>t;
    while(t--){
        solve();
    }
}

