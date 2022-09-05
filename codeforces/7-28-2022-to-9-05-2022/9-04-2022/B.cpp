#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, d; cin >> n >> d;
    vector<ll> a(n);
    for(auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    ll l = 0, r = n-1;
    
    ll ans = 0;
    while(l < r){
        ll trav=0;
        while(a[r]*(trav+1) <= d && l+trav < r)trav++;
        if(a[r]*(trav+1)>d)ans++;
        l+=trav;
        r--;
    }
    if(l==r && a[r]>d)ans++;
    cout << ans << '\n';
}

