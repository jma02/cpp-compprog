#include <bits/stdc++.h>

using namespace std;

const int MN = 10e4;
vector<bool> visited(MN, false);
vector<int> adjacency[MN];

void dfs(int node){
    visited[node] = true;
    
    for(int u : adjacency[node]){
        if(!visited[u]) dfs(u);
    }
    return;
}
int main(){
    /* Inputting test case data
     * 
     *
     * Filling adjacency list
     *
     *
     */
        
    int N = 100; // N = number of nodes in graph
    for(int i = 0; i < N; i++){
        if(!visited[i]) dfs(i);
    }
}

