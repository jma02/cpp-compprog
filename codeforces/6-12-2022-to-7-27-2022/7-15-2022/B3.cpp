#include <bits/stdc++.h>
#include <numeric>
 
using ll = long long;
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<ll> r(n);
    for(ll &i : r) cin >> i;
    ll ans = 0;
    bool start = false;
    for(int i = 0; i < n-1; i++){
        if(start && !r[i]) ans++;
        if(r[i]) start = true;
    }
    ll sum = std::accumulate(r.begin(), r.end()-1, 0LL);
    cout << ans + sum << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >>t;
    while(t--){
        solve();
    }
}
 
