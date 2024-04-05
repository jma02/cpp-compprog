#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<vector<int>> ans(n);
    int x = 1;
    for(int i = 1; i < n; i+=2){
        for(int j = 0; j < m; j++) ans[i].push_back(x++);
    }
    for(int i = 0; i < n; i+=2){
        for(int j = 0; j < m; j++) ans[i].push_back(x++);
    }
    for(auto i : ans){
        for(auto j : i) cout << j << ' ';
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

