#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> ans(n);
    for(auto &i : ans) cin >> i;
    vector<long long> s(n);
    for(int i = 0; i < n; i++){
        s[i] = ans[i];
    }
    sort(s.begin(), s.end());
    long long b = s[n-1];
    long long b2 = s[n-2];

    for(auto i : ans){
        if(i < b) cout << i-b << " ";
        else cout << b - b2 << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

