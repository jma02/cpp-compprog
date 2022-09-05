#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, k, r, c; cin >> n >> k >> r >> c;

    ll ahead = c-(r%k);
    if(ahead < 0)ahead+=k;
    bool ans[n][n];
    memset(ans, false, n*n*sizeof(bool));
    for(int i = 0; i < n; i++){
        for(int j=0; j < n/k;j++){
            ans[i][(j*k+ahead)%n]=1;
        }
        ahead++; ahead%=n;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)cout << (ans[i][j] ? 'X': '.');
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

