#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll p, y;
bool prime(ll x){
    for(ll i = 2; i <= p && i <= (ll)sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    cin >> p >> y;
    for(ll i = y; i > p; i--){
        if(prime(i)){
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

