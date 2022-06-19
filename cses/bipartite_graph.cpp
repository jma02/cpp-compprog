#include <bits/stdc++.h>
using namespace std;

const int NM = 10e4+10;
vector<int> adjacency[NM];
bool visited[NM];
bool colorings[NM];
int N, M;
bool C = true;
bool bipartite = true;
void dfs(int node, bool color){
    colorings[node] = color;
    if(visited[node]) return;
    visited[node] = true;
    for(int u : adjacency[node]) dfs(u, !color);
}
void color(){
    for(int i = 1; i <= N; i++){
        if(!visited[i]) dfs(i, C);
    }
}
int main(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++){
        int N_1, N_2; cin >> N_1 >> N_2;
        adjacency[N_1].push_back(N_2);
        adjacency[N_2].push_back(N_1);
    }
    color();
    int trav = 1; 
    while(trav <= N && bipartite){
        for(int i : adjacency[trav]){
            if(colorings[i] == colorings[trav]){
            bipartite = false;
            break;
            }
        }
        trav++;
    }
    if(bipartite){
        for(int n = 1; n <= N; n++) cout << 
        (colorings[n] ? 1 : 2)
         << " ";
        cout << '\n';
    }
    else{
        cout << "IMPOSSIBLE" << '\n';
    }
}