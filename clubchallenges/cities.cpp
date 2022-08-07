#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MN = 3001;
vector<int> adj[MN];
vector<vector<ll>> cities;
vector<int> visited(MN,0);
ll comp = 0;
void dfs(ll node){
    visited[node]=true;
    comp++;
    for(ll u : adj[node]){
        if(!visited[u]){
            dfs(u);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("data.txt", "r", stdin);
    freopen("soln.txt", "w", stdout);

    auto cross = [](auto x1, auto x2, auto y1, auto y2){
        return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);};

    ll n; cin >> n;
    cities.push_back({0,0,0});
    for(int i = 0; i < n; i++){
        ll x, y, p; cin >> x >> y >> p;
        cities.push_back({x,y,p*p});
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if(i==j)continue;
            if(cities[i][2]>=cross(cities[i][0],cities[j][0],
                                    cities[i][1],cities[j][1])){
                adj[i].push_back(j);
            }
            if(cities[j][2]>=cross(cities[i][0],cities[j][0],
                                    cities[i][1],cities[j][1])){
                adj[j].push_back(i); 
            }
        }
    }

    ll ans = -1;
    for(int i = 1; i <= n; i++){
        visited.assign(MN, 0);
        comp = 0;
        dfs(i);
        ans = max(comp, ans);
    }
    cout << ans << '\n';
}

