#include <bits/stdc++.h>

#define f first
#define s second
using namespace std;

const int NM = 1e5+1;

vector<pair<int,int>> adj[NM];
bool vis[NM], c[NM];

bool ok = true;
void dfs(int node, bool col){
    vis[node]=true;
    c[node] = col;
    for(auto u : adj[node]){
        if(!vis[u.second]){
            if(u.first)dfs(u.second, col);
            else dfs(u.second, !col);
        }
        else{
            if(u.first && c[node]!=c[u.second])ok=false;
            else if(!u.first && c[node]==c[u.second])ok=false;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        char x; cin >> x;
        int a, b; cin >> a >> b;
        adj[a].push_back({x=='S', b});
        adj[b].push_back({x=='S', a});
        if(a==b && x=='D')ok = false;

    }
    int con = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i, 0);
            con++;
            if(!ok)break;
        }
    }
    if(!ok) cout << "0";
    else{
        cout << "1";
        for(int i = 0; i < con; i++)cout << "0";
    }
}

