#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m; cin >> n >> m;
    int x = 1, y = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int mvs = 8;
            if((i+2 > n) || (j+1 > m))mvs--;
            if((i-2 < 1) || (j+1 > m))mvs--;
            if((i+1 > n) || (j+2 > m))mvs--;
            if((i-1 < 1) || (j+2 > m))mvs--; 
            if((i+2 > n) || (j-1 < 1))mvs--;
            if((i-2 < 1) || (j-1 < 1))mvs--;
            if((i+1 > n) || (j-2 < 1))mvs--;
            if((i-1 < 1) || (j-2 < 1))mvs--;
            if(mvs==0){
                cout << i << " " << j << '\n';
                return;
            }
        }
    }
    cout << x << " " <<y<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

