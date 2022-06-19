#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()

const int MOD = 1000000007;

using ll = long long;
using namespace std;

void solve(){
    int max_row, max_col;
    int win = -MOD;
    int m, n; cin >> n >> m;
    int rec[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> rec[i][j];
            if(rec[i][j] > win){
                win = rec[i][j];
                max_row = i+1;
                max_col = j+1;
            }
        }
    }
    int middle_row = n % 2 == 0 ? (n / 2) : (n+1) / 2;
    int middle_col = m % 2 == 0 ? (m / 2) : (m+1) / 2;

    int add_row = abs(middle_row - max_row);
    int add_col = abs(middle_col - max_col);
    if(n % 2 == 0 && max_row <= middle_row) add_row++;
    if(m % 2 == 0 && max_col <= middle_col) add_col++;

    int ans_row = middle_row + add_row;
    int ans_col = middle_col + add_col;
    cout << ans_row * ans_col << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}