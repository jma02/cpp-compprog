#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    ll n, k; cin >> n >> k;
    ll sand[n];
    for(ll i = 0; i < n; i++){
        cin >> sand[i];
    }
    if(k == 1){
       if(n % 2 == 0){
           cout << n/2-1 << '\n';
       }
       else{
           cout << n/2 << '\n';
       }
       return;
    }
    ll ans = 0;
    for(ll i = 1; i < n - 1; i++){
        if(sand[i] > sand[i-1] + sand[i+1]) ans++;
    }
    cout << ans << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

