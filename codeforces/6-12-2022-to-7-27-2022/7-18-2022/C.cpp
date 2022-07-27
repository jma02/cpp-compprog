#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    int n; cin >> n;
    vector<ll> b(n);
    for(ll &i : b) cin >> i;

    vector<ll> x, y;
    for(int i = 1; i < n-1; i++){
        ll cost = max(max(b[i-1], b[i+1])+1 - b[i], 0LL);
        if(i%2 == 0) x.push_back(cost);
        else y.push_back(cost);
    }
    ll sum1 = std::accumulate(x.begin(), x.end(), 0LL);
    ll sum2 = std::accumulate(y.begin(), y.end(), 0LL);

    if(sum1 < sum2 && x.size() >0) cout << sum1;
    else cout << sum2;
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

