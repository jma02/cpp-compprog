#include <bits/stdc++.h>

using namespace std;

void solve(){
    int g[2][2];
    int ones = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> g[i][j];
            if(g[i][j]) ones++;
        }
    }
    if(ones == 0) cout << 0 << '\n';
    else if(ones == 4) cout << 2 << '\n';
    else cout << 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

