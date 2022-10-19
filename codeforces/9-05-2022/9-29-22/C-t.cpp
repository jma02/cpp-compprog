#include "bits/stdc++.h"
 
using namespace std;
 
#define ll long long
const ll MOD = 998244353;
 
namespace Combo {
 
  vector<ll> fact = {1};
  vector<ll> inv = {1};
 
  ll binexp(ll a, ll b) {
    if (b == 0) return 1ll;
    if (b == 1) return a % MOD;
    if (b % 2) return (a * binexp(a, b - 1)) % MOD;
    return binexp((a*a)%MOD, b/2);
  }
 
  ll f(ll a) {
    while (fact.size() <= a)
      fact.push_back(((ll)fact.size() * fact.back()) % MOD);
    return fact[a];
  }
 
  ll i(ll b) {
    while (inv.size() <= b)
      inv.push_back((inv.back() * binexp(inv.size(), MOD - 2)) % MOD);
    return inv[b];
  }
 
  ll choose(ll a, ll b) {
    if (a < b) return 0;
 
    ll res = (f(a) * i(b)) % MOD;
    res *= i(a - b); res %= MOD;
    return res;
  }
  
};
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  int t; cin >> t;
  while (t--) {
 
    int n;
    cin >> n;
 
    vector<int> a = {1};
    while (a.size() < n) {
      if (a.size() + 1 == n) {
        a.push_back(a.back() ^ 1);
        break;
      }
      a.push_back(a.back() ^ 1);
      a.push_back(a.back());
    }
 
    ll x = 0, y = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
 
      if (a[i]) {
        ll rm = (n / 2) - x;
        // cout << x << " " << y << endl;
        if (rm > 0) ans += Combo::choose(n - x - y - 1, rm - 1);
        ans %= MOD;
        y++;
      }
      else {
        x++;
      }
 
    }
 
    ll A = ans;
    ll B = (Combo::choose(n, n / 2) - 1 - A + MOD * 2) % MOD;
 
    cout << A << " " << B << " " << 1 << "\n";
 
  }
  
}
