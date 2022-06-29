#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    ll n; cin >> n;
    ll arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll x = arr[0];
    for(ll i = 1; i < n-1; i++){
        x = x ^ arr[i]; 
    }
    cout << x << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

