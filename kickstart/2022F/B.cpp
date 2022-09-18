#include <bits/stdc++.h>

using namespace std;
const int NM = 1e5+1;

bool vis[NM];
vector<int> adj[NM];
int dpts[NM];
queue<pair<int,int>> q;


int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    int t; cin >> t;
    for(int x = 1; x<=t; ++x){
        int n, queries; cin >> n >> queries;

        for(int i = 0; i <= n; i++){
            adj[i].clear();
        }

        memset(vis, 0, sizeof(vis));
        memset(dpts, 0, sizeof(dpts));

        for(int i = 0; i < n-1; i++){
            int a, b; cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        q.push({1,0});
        vis[1]=1;

        while(!q.empty()){
            auto a = q.front();
            q.pop();
            dpts[a.second]++;

            for(auto i : adj[a.first]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push({i, a.second+1});
                }
            }

        }
        int lvl = 0;
        int j = 0;
        int ans = 0;
        for(int i = 0; i < queries; i++){
            int tmp; cin >> tmp;
            lvl++;
            if(lvl==dpts[j]){
                lvl=0;
                ans+=dpts[j];
                j++;
            }
        }
        cout << "Case #"<<x<<": "<<ans<<'\n';
    }

}

