#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n, x; cin >> n >> x;
    vector<ll> f(n);
    for(ll &i : f) cin >> i;
    ll l = -1, r = LLONG_MAX;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(-x+f[i] > r || x+f[i] < l){
            ans++; 
            l = -x+f[i];
            r = x+f[i];
        }
        else{
            l = max(l, -x+f[i]);
            r = min(r, x+f[i]);
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

