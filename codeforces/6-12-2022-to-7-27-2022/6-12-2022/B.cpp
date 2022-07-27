#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    ll n, q; cin >> n >> q;
    vector<ll> prices(n);
    for(ll &i : prices) cin >> i;
    sort(all(prices), greater<ll>());
    vector<ll> pref_sum(n+1);
    ll sum = 0;
    for(ll i = 1; i <= n; i++){
        sum += prices[i-1];
        pref_sum[i] = sum;
    }
    for(ll i = 0; i < q; i++){
        ll x, y; cin >> x >> y;
        cout << pref_sum[x] - pref_sum[x-y] << '\n';
    }
}

int main(){
    solve();
}