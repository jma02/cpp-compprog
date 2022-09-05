#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MN = 2*10e5;

vector<ll> ans(MN, 0);
vector<ll> path;
vector<pair<ll,pair<ll,ll>>> adj[MN];
void dfs(ll node, ll sum, ll psum){
    ans[node] = upper_bound(path.begin(), path.end(), sum)-path.begin();

    for(pair<ll, pair<ll,ll>> u : adj[node]){
        path.push_back(psum+u.second.second);
        dfs(u.first, sum+u.second.first, psum+u.second.second);
        path.pop_back();
    }
}

void solve(){
    ll n; cin >>n;
    path.clear();
    for(int i = 0; i <= n; i++){
        adj[i].clear();
    }
    ans.resize(MN, 0);
    for(int i = 2; i <= n; i++){
        ll v, a, b; cin >> v >> a >> b;
        adj[v].push_back({i, {a,b}});
    }
    dfs(1, 0, 0);
    for(int i = 2; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

