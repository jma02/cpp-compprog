#include <bits/stdc++.h>
#include <numeric>

using ll = unsigned long long;
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> r(n);
    for(ll &i : r) cin >> i;
    ll ans = 0;
    bool start = false; int idx;
    for(int i = 0; i < n-1; i++){
        if(start && !r[i]) ans++;
        if(r[i]){
            start = true;
            idx = i;
        }
    }
    for(int i = 0; i < n-1; i++){
        ans += r[i];
    }
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

