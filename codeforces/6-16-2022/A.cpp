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
    int a,b; cin >> a >> b;
    while(a && b){
        cout << 10;
        a--; b--;
    }
    while(a--) cout << 0;
    while(b--) cout << 1;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}