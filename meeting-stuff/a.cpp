#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n; cin >> n;
    vector<long long> arr(n);
    for(auto &i : arr) cin >> i;
    sort(arr.begin()+1, arr.end());
    long long ans = arr[0];
    for(int i = 1; i < n; i++){
        ans+=max(0LL, (arr[i]-ans+1)/2);
    }
    cout << ans << '\n';
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}

