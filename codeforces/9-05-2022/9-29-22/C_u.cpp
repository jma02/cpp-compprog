#include <bits/stdc++.h>
using ll = long long;
const ll MOD = 998244353;

using namespace std;
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


void solve(){
    ll n; cin >> n;
    ll ans = 0;
    int a = 1;
    if(n==2){
        cout<<"1 0 1\n";
        return;
    }
    for(int i = n; i-2>= 0; i-=2){
        if(a){
            if((i/2) > 0)ans+=Combo::choose(i-1, (i/2)-1);
            ans%=MOD;
        }
        else{
            if((i/2)-1 > 0)ans+=Combo::choose(i-2, (i/2)-2);
            ans%=MOD;
        }
        a^=1;
    }
    ll tot = Combo::choose(n, n/2)%MOD;
    cout << ans <<" "<<(tot-ans+MOD)%MOD-1 <<" "<< 1 << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

