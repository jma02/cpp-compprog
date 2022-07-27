#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    int n; cin >> n;
    cout << 2 << '\n';
    set<ll> seen;
    //1
    for(ll i = 1; i <= n; i++){
        for(ll j = i; j <= n; j*=2){
            if(!seen.count(j)) cout << j << " ";
            seen.insert(j);
        }
    }
    
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

