#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    int n; cin >> n;
    vector<ll> a(n);
    map<ll,ll> occ;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        a[i] = x;
        occ[x]++;
    }
    int l = find(a.begin(), a.end(), (*occ.rbegin()).first)-a.begin();
    int r = l;
    bool ok = true;
    occ[(*occ.rbegin()).first]--;
    if((*occ.rbegin()).second == 0LL) occ.erase((*occ.rbegin()).first);
    while((r<n-1 || l > 0) && ok){
        if(r+1 < n && a[r+1] == (*occ.rbegin()).first){
            r++;
            occ[(*occ.rbegin()).first]--;
        }
        else if(l-1 >= 0 && a[l-1] == (*occ.rbegin()).first){
            l--;
            occ[(*occ.rbegin()).first]--;
        }
        else ok = false;
        if((*occ.rbegin()).second == 0LL) occ.erase((*occ.rbegin()).first);
    }   
    if(ok) cout<<"YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

