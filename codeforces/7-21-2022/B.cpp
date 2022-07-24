#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    vector<ll> w(n);
    for(ll &i : w) cin >> i;
    vector<ll> dif(n-1,0);
    for(int i = 0; i < n-1; i++){
        if(w[i+1]<w[i]) dif[i] = w[i]-w[i+1];
    }
    vector<ll> bdif(n-1,0);
    for(int i = 0; i < n-1; i++){
        if(w[i+1]>w[i]) bdif[i] = w[i+1] - w[i];
    }
    vector<ll> pref(n+1, 0);
    vector<ll> suff(n+1, 0);
    ll sum = 0;
    for(int i = 1; i < n+1; i++){
        sum+= dif[i-1];
        pref[i] = sum;
    }
    sum = 0;
    for(int i = 1; i < n+1; i++){
        sum+= bdif[i-1];
        suff[i] = sum;
    }
    while(m--){
        int x, y; cin >> x >> y;
        if(y>x) cout << pref[y-1] - pref[x-1] << '\n';
        else cout << suff[x-1] - suff[y-1] << '\n';
    }
    
}

