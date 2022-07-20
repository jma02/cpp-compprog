#include <bits/stdc++.h>

using namespace std;

// for e = (u,v), .first = v
// .second = cost

const int MN = 100;

vector<pair<int,int>> adj[MN];
bool visited[MN];

int dfs(int node, int sum){
    visited[node] = true;
    int ans = sum;
    for(auto u : adj[node]){
        if(!visited[u.first]){
            ans = max(ans, dfs(u.first, sum+u.second));
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
        int u, v, c; cin >> u >> v >> c;
        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
    }
    int ans = dfs(0, 0);
    cout << ans << '\n';
}

