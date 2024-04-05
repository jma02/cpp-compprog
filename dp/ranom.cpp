#include <bits/stdc++.h>

using namespace std;

const int val[] = {1,10,100,1000,10000};
const int INF = 1e9;

int dp[2][5][2];

void solve(){
    string s; cin >> s;
    reverse(s.begin(), s.end());

    // reset state of each possible char we have seen
    // as well as whether or not we have exchanged a char

    for(int j = 0; j < 5; j++){
        dp[0][j][0] = dp[0][j][1] = -INF;
    }
    dp[0][0][0] = 0;

    for(auto c : s){
        int x = c - 'A';
        for(int j = 0; j < 5; j++){
           dp[1][j][0] = dp[1][j][1] = -INF;
        }

        // from state to state, we only care about the max we have seen, and whether we have swapped
        // then exhuastively search on the values we can swap on

        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 2; k++){
                for(int y = 0; y < 5; y++){
                    int max_vals = max(j, y);
                    int swap = k + (x != y); //no swap da same val val
                    if(swap < 2){
                        dp[1][max_vals][swap] = max(
                                dp[1][max_vals][swap],
                                dp[0][j][k] + (y < max_vals ? -val[y] : val[y])
                                );
                    }
                } 
            }
        }
        swap(dp[0], dp[1]);
    }
    int ans = -INF;
    for(int j = 0; j < 5; j++){
       ans = max(ans, max(dp[0][j][0], dp[0][j][1]));
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

