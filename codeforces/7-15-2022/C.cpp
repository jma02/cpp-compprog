#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    int n, c, q; cin >> n >> c >> q;
    vector<ll> left(c+1), right(c+1);
    vector<ll> copy(c+1, 0);
    string s; cin >> s;
    
    left[0] = 1; right[0] = n;
    
    ll len = n;
    for(int i = 1; i <= c; i++){
        ll l, r; cin >> l >> r;
        left[i] = len+1;
        right[i]  = len + r - l + 1;
        copy[i] = l;
        len += r - l + 1; 
    }
    while(q--){
        ll x; cin >> x;
        while(x > n){
            int i = c;
            while(x < left[i]) i--;
            ll gap = x - left[i];
            x = copy[i] + gap;
        }
        cout << s[x-1] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

