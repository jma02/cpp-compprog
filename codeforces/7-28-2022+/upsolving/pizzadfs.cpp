#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 10e9 + 7;
const ll MN = 10e5;

vector<bool> visited(MN, false);
vector<int> adj[MN];
ll fixed;
set<ll> known;
bool dfs(ll node, bool fix){
    visited[node] = true;
    if(known.count(node)) fix=true;
    for(ll u : adj[node]){
        if(!visited[u]) dfs(u,fix);
    }
    return fix;
}

void solve(){
    known.clear();
    visited.rewsize(MN, false);
    int n; cin >> n;
    vector<ll> a(n); for(ll &i : a) cin >> i;
    vector<ll> b(n); for(ll &i : b) cin >> i;
    vector<ll> c(n); 
    for(ll &i : c){
        cin >> i;
        known.insert(i)
    }

}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

