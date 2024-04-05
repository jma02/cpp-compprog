#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;

    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans++;
        while(ans == arr[i])ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

