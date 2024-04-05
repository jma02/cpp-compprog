#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int dp[200005];
    int last[200005];
    memset(dp, 0, sizeof dp);
    std::fill(last, last+200005, -1);
    
    // 1 1 1 2 3 1 1 3
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(last[x] == -1) {
            last[x] = i;
            dp[i] = dp[i-1];
            continue;
        }
        dp[i] = max(dp[i - 1], max(dp[last[x]] + i - last[x],
                                   dp[last[x] - 1] + i - last[x] + 1));
        last[x] = i;
    }
    cout << dp[n] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

