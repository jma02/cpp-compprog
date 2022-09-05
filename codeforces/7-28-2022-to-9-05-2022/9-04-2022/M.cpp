#include <bits/stdc++.h>

using namespace std;
const int MN = 1e5+1;
using ll = long long;
#define f first
#define s second

vector<pair<ll, ll>> adj[MN];
vector<bool> rvis(false, MN);
vector<bool> lvis(false, MN);
set<ll> path;


vector<ll> rcost(MN);

ll ans = LLONG_MAX;

void dfsa(ll node, ll cost){
    rvis[node]=true;
    if(lvis[node])ans=min(cost, ans);
    rcost[node]=min(cost, rcost[node]);
    path.insert(node);
    for(auto u : adj[node]){
        if(!path.count(u.f))dfsa(u.f, cost+u.s);
    }
    path.erase(node);
}

void dfsb(ll node, ll cost){
    lvis[node]=true;
    if(rvis[node])ans=min(cost+rcost[node], ans);
    path.insert(node);
    for(auto u : adj[node]){
        if(!path.count(u.f))dfsb(u.f, cost+u.s);
    }
    path.erase(node);


}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        ll u, v, w; cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }
    for(int i = 2; i <= n; i++){
        ans = LLONG_MAX;
        rcost.assign(MN, LLONG_MAX);
        rvis.assign(MN, false);
        lvis.assign(MN, false);
        lvis[1]=true;
        dfsa(i, 0);
        dfsb(1, 0);
        if(ans == LLONG_MAX)cout << -1 << " ";
        else cout << ans << " ";
    }
}

