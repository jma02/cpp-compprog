#include <bits/stdc++.h>

using namespace std;

const int MN = 2e5 + 1;
int T, N, K;

vector<int> adj[MN];
bool visited[MN];

int dfs(int node){
    visited[node] = true;
    for(auto i : adj[node]){
        if(!visited[i]){
            return dfs(i) + 1;
        }
    }
    return 1;
}

void solve(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        adj[i].clear();
        visited[i] = false;
    }
    bool ok = true;
    int x, y;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        if(x == y || adj[x].size() > 2 || adj[y].size() > 2) ok = false;
    }
    if(!ok){
        cout << "NO" << '\n';
        return;
    } 
    for(int i = 1; i <= N; i++){
        if(!visited[i]){
            if(dfs(i) % 2 == 1){
                ok = false;
                break;
            }
        }
    }
    
    if(ok) cout << "YES";
    else cout << "NO";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    cin >> T;
    while(T--){
        solve();
    }
}

