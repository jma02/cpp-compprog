#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    vector<pair<int,int>> un;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        un.push_back({x,i});
    }
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    sort(un.begin(), un.end());

    map<int, pair<int,int>> seen;
    vector<pair<int,int>> stack;
    
    int cakes = 0;
    for(int i = n-1; i >= 0; i--){
        stack.push_back(un[i]); 
        int add = 0;
        for(int u : adj[un[i].second]){
            if(seen.count(u)){
                cakes++;
                add++;
            }
        }
        seen[un[i].second] = {add, un[i].second};
    }
    int ans = 0;
    while(cakes%2){
        if(seen[stack.back().second].first){
            cakes -= seen[stack.back().second].first;
            ans += seen[stack.back().first].second;
        }

        stack.pop_back();
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

