#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()

const int MOD = 1000000007;

using ll = long long;
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    if((n+m)%2 == 0){
        cout << "NO" << '\n';
        return;
    }
    int grid[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[n][m];
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  

    return 0;
}