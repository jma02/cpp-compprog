#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;

    vector<ll> low(n);
    vector<ll> hi(n);
    
    ll sub = 0;
    for(int i = n-1; i >=0; i--){
        ll idx = lower_bound(b.begin(), b.end(), a[i])-b.begin();
        low[i]=b[idx]-a[i]; 
        
        ll hi_idx = lower_bound(b.begin(), b.end()-sub, a[i])-b.begin();
        hi[i] = b[n-1-sub]-a[i];
        if(hi_idx == i) sub+=n-i-sub;
    }
    for(auto i : low) cout << i << " ";
    cout << '\n';
    for(auto i : hi) cout << i << " ";
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

