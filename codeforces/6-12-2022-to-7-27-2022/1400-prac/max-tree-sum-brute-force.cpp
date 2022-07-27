#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int friends[100];
vector<pair<int,ll>> adjacency[100];
bool visited[100];
vector<ll> sums;

void dfs(int node, ll sum){ 
    visited[node] = true;
    for(pair<int, ll> u : adjacency[node]){
        if(visited[u.first]){
            sums.push_back(sum);
        }
        else dfs(u.first, sum + u.second);
    }
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n - 1; i++){
        int n1, n2; ll c; cin >> n1 >> n2 >> c;
        adjacency[n1].push_back(make_pair(n2,c));
        adjacency[n2].push_back(make_pair(n1,c));

    }
    dfs(0, 0);
    ll max_cost = 0;
    for(ll i : sums){
        max_cost = max(i, max_cost); 
    }
    cout << max_cost << '\n';
}
