#include <bits/stdc++.h>

using namespace std;

const int N = 2e6+1;

vector<int> adj[N];
bool vis[N];

vector<int> path;
int x, y;

bool dfs(int node, bool found){
    if(node == y){
        vis[node]=1;
        path.push_back(y);
        return 1;
    }
    vis[node]=1;
    for(auto u : adj[node]){
        if(!vis[u] && !found){
            found = dfs(u, found);
        }
    }
    if(found)path.push_back(node);
    return found;
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >> n;
    cin >> x >> y;
    for(int i = 0; i < n-1; i++){
        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(x, 0);
    for(int i = path.size()-1; i >=0; i--)cout << path[i]<<" ";
    

}
