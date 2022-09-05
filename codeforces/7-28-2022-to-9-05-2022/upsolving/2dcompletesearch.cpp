#include <bits/stdc++.h>

using namespace std;
int g[5001][5001];
int pref[5001][5001];
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c; 
            g[i][j] = c-'0';
        }
    }
    for(int i = 1; i <= n+n; i++){
        for(int j = 1; j <=m+m; j++){
            pref[i][j]+= pref[i-1][j];
            pref[i][j]+= pref[i][j-1];
            pref[i][j]-= pref[i-1][j-1];
            pref[i][j]+= g[i-1][j-1];
        }
    }
    int k = 2, ans = INT_MAX;
    while(k <= min(m,n)){
        int curr = 0;
        for(int i = k; i < n+k; i+=k){
            for(int j = k; j <m+k; j+=k){
                int cell = 0;
                cell+=pref[i][j];
                cell-=pref[i-k][j];
                cell-=pref[i][j-k];
                cell+=pref[i-k][j-k];
                curr+=min(cell, (k*k)-cell);
            }
        }
        ans = min(curr, ans);
        k++;
    }
    cout << ans << '\n';
}

