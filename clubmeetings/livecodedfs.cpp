#include <bits/stdc++.h>
using namespace std;

const int N = 10e5;

bool vis[N];
vector<int> adj[N];
int start;
int ans = 0;
bool ok = true;

void dfs(int node){
    vis[node] = true;
    if(adj[node].size() > 1) ok = false;

    for(auto u : adj[node]){
       if(!vis[u])dfs(u);
       else if((u == start) && ok)ans++;
    }
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    memset(vis, 0, sizeof(vis));
    int n, m; cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            start=i;
            ok = true;
            dfs(i);
        }
    }
    cout << ans << '\n';
}
