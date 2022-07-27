#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    if(n % 2 == 0){
        cout << n/2 << " " << n/2 << " " << 0 << '\n';
    }
    else cout << -1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;    
    while(T--){
        solve();
    }
}

