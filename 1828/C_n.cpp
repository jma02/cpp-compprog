#include <bits/stdc++.h>
using ll = long long;
ll MOD = 1e9+7;

namespace Combo{
    vector<ll> fact = {1};
    vector<ll> inv = {1};

    ll binexp(ll a, ll b){
        if (b == 0) return 1ll;
        if (b == 1) return a % MOD;
        if (b % 2) return (a * binexp(a,b-1)) % MOD;
        return binexp((a*a)%MOD, b/2);
    }

    ll f(ll a){
        while (fact.size() <= a)
            fact.push_back(((ll)fact.size() * fact.back()) % MOD);
        return fact[a];
    }

    ll i(ll b){
        while (inv.size() <= b)
            inv.push_back((inv.back() * binexp(inv.size(), MOD-2)) % MOD);
        return inv[b];
    }

    ll choose(ll a, ll b){
        if(a<b) return 0;

        ll res = (f(a)*i(b))%MOD;
        res*=i(a-b); res%=MOD;
        return res;
    }
};

using namespace std;

void solve(){
    
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

