#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
 
    vector<ll> ans(n);
    for(ll i : ans)cin>> i;
    ll x = 0;
    ll m = 0;
    for(ll i = 1; i <= n; i++){
        if(ans[i-1]>m){
            x=i;
            m=ans[i-1];
        }
    }
    cout << x << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}
