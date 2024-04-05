#include <bits/stdc++.h>

using namespace std;

void solve(){
// cannot jump on thorn
// max (f(i-1) + a[i], f(i-2) + a[i]) 
    int n; cin >> n;
    vector<long long> p; 
    string s; cin >> s;
    for(auto i : s){
        if(i == '.') p.push_back(0);
        else if(i == '@') p.push_back(1);
        else p.push_back(-INT_MAX);
    }
    vector<long long> dp(n, 0);
    dp[0] = p[0];
    if(n > 1) dp[1] = dp[0] + p[1];
    for(int i = 2; i < n; i++){
        dp[i] = max(dp[i-1] + p[i], dp[i-2] + p[i]);
    }
    cout << *std::max_element(dp.begin(), dp.end()) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

