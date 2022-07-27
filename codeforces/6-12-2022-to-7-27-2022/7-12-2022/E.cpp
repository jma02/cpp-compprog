#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int m[n][n];
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        for(int j = 0; j < n; j++){
            m[i][j] = x[j]-'0';
        }
    }
    int ans = 0;
    for(int i = 0; i <(n+1)/2; i++){
        for(int j = 0; j < n/2; j++){
            int cur = 0;
            cur+= m[i][j];
            cur+= m[j][n-1-i];
            cur+= m[n-1-i][n-1-j];
            cur+= m[n-1-j][i]; 
            ans+= min(cur, 4-cur);
        }

    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        solve();
    }
}

