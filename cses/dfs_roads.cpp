#include <bits/stdc++.h>
using namespace std;
const int MN = 1e5+10;
int V,E;
vector<bool> visited(MN);
vector<vector<int>> adjacency(MN);
vector<int> rep(MN);
void dfs(int node){
    if(visited[node]) return;
    visited[node] = true;
    for(auto u: adjacency[node]) dfs(u);
}

int count_components(){
    int count = 0;
    for(int i = 1; i <= V; ++i){
        if(!visited[i]){
            rep[count++] = i;
            dfs(i);
        }
    }
    return count;
}

int main(){
    cin >> V >> E;
    for(int i = 0; i < E; i++){
        int N_1, N_2; cin >> N_1 >> N_2;
        adjacency[N_1].push_back(N_2);
        adjacency[N_2].push_back(N_1);
    }
    int new_roads = count_components();
    cout << new_roads - 1 << '\n';
    for(int i = 1; i < new_roads; ++i){
        cout << rep[i-1] << " " << rep[i] << '\n';
    }
}