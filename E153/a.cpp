#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long m, k, a1, ak; cin >> m >> k >> a1 >> ak;
    long long ans = 0;

    long long remainder = m % k;
    // try and make k a factor of m
    // use our 1-tokens to achieve this
    a1 -= remainder;
    m -= remainder;
    // and add to the answer the overdraft
    if(a1 < 0) {
        ans-= a1; 
        a1 = 0;
    }
    m /= k;
    // we need m tokens
    // use our k-tokens
    m -= min(ak, m);
    // if we have any 1-tokens left,
    // use them here for every k we can create from
    // the 1-tokens
    m -= min(a1/k, m);

    ans += m;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

