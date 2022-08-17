#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for(ll &i : a)cin >> i;
    sort(a.begin(), a.end());
    map<ll,ll> occ;
    ll curr = 1;
    for(int i = n-1; i >= 0; i--){
        curr = (k+a[i]-1)/a[i];
        occ[curr]++;
    }
    ll ans = 0;
    ll c = 0;
    for(auto [key, val] : occ){
        ans+= (val+c)/key;
        c = (val+c)%key;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

