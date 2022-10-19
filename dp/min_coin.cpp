#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, k; cin >> n >> k;

    vector<int> coin(n);
    for(int i = 0; i < n; i++)cin>>coin[i];
    ll dp[k+1];
    memset(dp,1000000, sizeof(dp));
    dp[0]=0;
    for(int i = 1; i <= k; i++){
        for(int j = 0; j < n; j++){
            if(coin[j]<=i)dp[i]=min(dp[i-coin[j]]+1LL, dp[i]);
        }
    }
    if(dp[k]>1000000)cout<<-1<<'\n';
    else cout << dp[k] << '\n';
}

