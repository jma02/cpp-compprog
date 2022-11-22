#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;

bool vis[N];
vector<int> adj[N];
int start;

int ans = 0;

int edges = 0;
int cyclen = 0;
int lst = -1;
void dfs(int node, int d){
    vis[node] = 1;
    for(auto u : adj[node]){
       // want to count edges and nodes; nodes must equal 2*edges
        if(u != lst){
            edges++;
            if((u == start) && !cyclen) cyclen = d;
        }
        if(!vis[u])dfs(u, d+1);
    }
    if((node == start) && (cyclen+1)*2 == edges){ans++;
    cout<<"DBG: " << edges << ' ' << cyclen<< " START "<< start << '\n' ;
    }
    else if(node == start) cout<<"DBG: " << edges << ' ' << cyclen << " START "<< start << '\n';



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
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            start=i;
            lst = -1;
            edges=0;
            cyclen = 0;
            dfs(i, 1);
        }
    }
    cout << ans << '\n';
}

