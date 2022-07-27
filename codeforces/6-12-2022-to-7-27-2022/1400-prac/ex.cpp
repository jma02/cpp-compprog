#include <bits/stdc++.h>

using namespace std;

const int MN = 10e5;
bool visited[MN];
vector<int> adjacency[MN];

void dfs(int node){ 
    visited[node] = true;
    for(int u : adjacency){
        if(!visited[u]) dfs(u);
    }
}

int main(){
    int N = 100; 
    // for each vertex in graph -- implementation varies, but in this case
    // we are assuming N to be the number of vertices in the graph
    for(int i = 1; i < N; i++){
        if(!visited[i]) dfs(i);
    }
}

