#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    ll price; cin >> price;
    ll power = 0, a = price;
    while(a >= 10){
        a /= 10;
        power++;
    }
    ll base = pow(10, power);
    cout << price - base << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
    
}

