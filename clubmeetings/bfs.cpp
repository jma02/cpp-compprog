#include <bits/stdc++.h>

using namespace std;
const int NM = 1e6; // problem constraints

bool vis[NM];
vector<int> adj[NM];

int main(){

        queue<int> q;
        q.push(1);
        vis[1]=1;

        while(!q.empty()){
            auto a = q.front();
            q.pop();

            for(auto i : adj[a]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
}

