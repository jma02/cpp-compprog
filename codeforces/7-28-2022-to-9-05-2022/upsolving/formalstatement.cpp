#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for(auto &i : a)cin >> i;
    for(auto &i : b)cin >> i;
    bool ok = true;
    for(int i = 0; i < n-1; i++){
        if(a[i]>b[i]) ok = false;
        if(a[i]!=b[i]&&b[i]>b[i+1]+1) ok = false;
    }
    if(a[n-1]>b[n-1])ok = false;
    if(a[n-1]!=b[n-1]&&b[n-1]>b[0]+1)ok=false;

    if(ok)cout<<"YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

