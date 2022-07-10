#include <bits/stdc++.h>
#include <utility>

using namespace std;
using ll = long long;
void solve(){
    ll n, m; cin >> n >> m;
    bool arr[n][m];
    arr[0][0] = 1;
    vector<pair<int,int>> dnt;
    dnt.push_back(make_pair(1,0));
    dnt.push_back(make_pair(0,1));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int adj = 0;
            bool u = false, d = false, l = false, r = false;
            if(i > 0 && arr[i-1][j] != arr[i][j]) 
            {
                u = true;
                adj++;
            }
            if(i < n-1 && arr[i+1][j] != arr[i][j])
            {
                d = true;
                adj++;
            }
            if(j > 0 && arr[i][j-1] != arr[i][j]) 
            {
                l = true;
                adj++;
            }
            if(j < m-1 && arr[i][j+1] != arr[i][j]) 
            {
                r = true;
                adj++;

            }
            if(adj == 2) continue;
            else if(adj == 1){
                if(!u) arr[i-1][j] = !arr[i][j];
                else if(!d) arr[i+1][j] = !arr[i][j];
                else if(!l) arr[i][j-1] = !arr[i][j];
                else arr[i][j+1] = !arr[i][j];
            }
        } 
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << (arr[i][j] ? 1 : 0)<< " ";
        }
        cout << '\n';
    }

        
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
    
}

