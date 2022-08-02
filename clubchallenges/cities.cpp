#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MN = 3001;
vector<int> adj[MN];
vector<array<ll, 3>> cities;

vector<ll> ans[MN];
vector<bool> visited(MN,false);
ll component = 0;
void dfs(ll node){
    component++;
    visited[node]=true;
    for(ll u : adj[node]){
        if(!visited[u]) dfs(u);
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("data.txt", "r", stdin);
    freopen("soln.txt", "w", stdout);


    auto cross = [](ll x1, ll x2, ll y1, ll y2){
        return (ll)floor(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));};

    ll n; cin >> n;
    cities.push_back({0,0,0});
    for(int i = 1; i <= n; i++){
        ll x, y, p; cin >> x >> y >> p;
        cities.push_back({x,y,p});
    }
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            if(i==j)continue;
            if(cities[i][2]>=(cross(cities[i][0],cities[j][0],
                                    cities[i][1],cities[j][1]))){
                adj[i].push_back(j);
            }
            if(cities[j][2]>=(cross(cities[i][0],cities[j][0],
                                    cities[i][1],cities[j][1]))){
                adj[j].push_back(i); 
            }
        }
    }
    ll ans = -1;
    for(int i = 1; i <= n; i++){
        component = 0;
        visited.resize(n+1, false);
        dfs(i);
        ans = max(component, ans);
    }
    cout << ans << '\n';
}

