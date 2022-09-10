#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;

    vector<ll> ans(n);
    for(auto &i : ans)cin >> i;
    ll m = -1;
    for(int i = 0; i < n-1; i++){
        m = max(m, ans[i]-ans[i+1]);
    }
    m = max(m, ans[n-1]-ans[0]);
    for(int i = 1; i < n-1; i++){
        m = max(m, ans[i]-ans[0]);
    }
    for(int i = 0; i < n-1; i++){
        m = max(m, ans[n-1]-ans[i]);
    }
    cout << m << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

