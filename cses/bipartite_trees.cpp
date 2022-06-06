#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) v.begin(), v.end()
const int MN = 1e6;
ll N, blue = 0;
vector<int> adjacency[MN];
bool visited[MN], colorings[MN];
vector<int> red;
void dfs(int node, bool color){
    colorings[node] = color;
    if(visited[node]) return;
    visited[node] = true;
    if(color) red.push_back(node);
    else blue++;
    for(int u : adjacency[node]) dfs(u, !color);
}

int main(){
    cin >> N;
    for(int i = 1; i < N; i++){
        int N1, N2; cin >> N1 >> N2;
        adjacency[N1].push_back(N2);
        adjacency[N2].push_back(N1);
    }
    dfs(1, true);
    ll count = 0;
    for(int i : red) count += (blue - adjacency[i].size());
    cout << count << '\n';
}