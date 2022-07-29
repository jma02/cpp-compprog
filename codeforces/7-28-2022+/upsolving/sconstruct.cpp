#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >> n;
    vector<ll> l(n);
    for(ll &i : l) cin >> i;
    sort(l.begin(), l.end());
    ll curr = l[n-1], ans = 0;
    for(int i = n-1; i >= 0; i--){
        ans+= min(l[i], curr);
        curr = max(min(l[i], curr)-1, 0LL);
    }
    cout << ans << '\n';
}

