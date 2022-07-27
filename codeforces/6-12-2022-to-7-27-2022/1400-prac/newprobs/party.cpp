#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    map<int,set<int>> adj;
    vector<int> cost(n);
    for(int &i : cost) cin >> i;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
    if(!(m%2)){
        cout << "0\n";
        return;
    }
    int ans = INT_MAX;
    for(auto i : adj){
        if(i.second.size()%2) ans = min(ans, cost[i.first-1]);
    }
    for(auto i : adj){
        for(auto j : i.second){
            if(i.second.size()%2==0 && adj[j].size()%2==0) ans = min(ans, cost[i.first-1]+cost[j-1]);
        }
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

