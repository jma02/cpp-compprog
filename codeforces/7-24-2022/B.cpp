#include <bits/stdc++.h>

using namespace std;
const int MN = 10e5;
void solve(){

    //maintain stack
    //push all points
    //pop until even
    int n, m; cin >> n >> m;
    vector<pair<int,int>> u(n+1, {0,0});
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        u[i] = {x, i}; 
    }
    vector<int> adj[MN];
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    sort(u.begin(),u.end());
    stack<int> inv;
    int cakes = 0;
    map<int,pair<int,int>> incl;

    for(int i = n; i > 0; i--){
        inv.push(i);
        int add = 0;
        for(int f : adj[u[i].second]){
            if(incl.count(f)){
                cakes++;
                add++;
            }
        }
        incl[i] = {add, u[i].first};
    }
    int ans = 0;
    while(cakes % 2){
        cakes -= incl[inv.top()].first;
        ans+= incl[inv.top()].second;
        inv.pop();
    }
    cout << ans << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

