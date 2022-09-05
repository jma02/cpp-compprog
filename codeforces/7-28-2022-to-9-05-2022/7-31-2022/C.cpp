#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n, m; cin >> n >> m;
    vector<ll> h(m);
    for(ll &i : h) cin >> i;
    sort(h.begin(), h.end());
    vector<ll> seg;
    for(int i = 0; i < m-1; i++){
        seg.push_back(h[i+1]-h[i]-1);
    }
    seg.push_back(n-h[m-1]+h[0]-1);
    sort(seg.begin(), seg.end(), greater<ll>());
    ll curr = 0, ans = m;
    for(ll s : seg){
        if(2*curr < s-1){
            ans+= 2*curr+1;
            curr+=2;
        }
        else if(s- 2*curr == 1){
            curr++;
            ans+= s-1;
        }
        else if(2*curr >= s){
            ans+= s;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

