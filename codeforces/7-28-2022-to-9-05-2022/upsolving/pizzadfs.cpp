#include <bits/stdc++.h>

using namespace std;
set<int> known;
const int MN = 10e5;
const int mod = 1e9+7;
vector<int> adj[MN];
vector<bool> visited(MN, false);

int subtract = 0;
int cyc = 0;

pair<bool,int> dfs(int node, bool fix, int dpt){
    visited[node] = true;    
    if(known.count(node)) fix = false;
    for(auto u : adj[node]){
        if(!visited[u]){
            auto x = dfs(u, fix, dpt+1);
            dpt = x.second;
            fix = x.first;
        }

    }
    return {fix, dpt};
}


void solve(){
    int n; cin >> n;
    subtract = 0;
    cyc = 0;
    for(int i = 1; i <= n; i++){
        adj[i].clear();
    }
    visited.assign(n+1, false);
    known.clear();
    vector<int> a(n), b(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        known.insert(x);
    }
    for(int i = 0; i < n; i++){
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    for(int i = 0; i < n; i++){
        if(!visited[i+1]){
            auto x = dfs(i+1, true, 1);
            if(x.second == 1)continue;
            if(!x.first) subtract++;
            cyc++;

        }
    }
    int ans = 1;
    for(int i = 0; i < cyc-subtract; i++){
        ans*=2;
        ans%=mod;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

