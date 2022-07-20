#include <bits/stdc++.h>//in java, is like
                        //import java.util.*

using namespace std;
// for edge = (u,v), .first = v
//.second = cost / weight of edge

const int MN = 100;
vector<pair<int,int>> adjacency_list[MN];
vector<bool> visited(MN, false);

int dfs(int node, int sum){
    visited[node] = true;
    int ans = sum; //we want to maximize this at each node
    for(auto u : adjacency_list[node]){
        if(!visited[u.first]){
            ans = max(ans, dfs(u.first, sum+u.second));
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);//faster input
    cin.tie(NULL);//faster input

    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
        int u, v, c; cin >> u >> v >> c;
        adjacency_list[u].push_back(make_pair(v,c));
        adjacency_list[v].push_back(make_pair(u,c));
    }
    int ans = dfs(0,0);
    cout << ans <<'\n';
}    
