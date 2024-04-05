#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
 * (a_i-x)^2 \le (a_{i+1}-x)^2
 * (a_i-x)^2 - (a_{i+1}-x)^2 \le 0
 * (a_i-x - a_{i+1}+x)(a_i-x+a_{i+1}-x) \le 0
 * (a_i - a_{i+1})(a_i+a_{i+1}-2x) \le 0
 * 
 * let \alph  = a_i - a+{i+1}
 * let \beta = a_i + a_{i+1}
 *
 * (\alph)(\beta - 2x) \le 0
 * \alph \cdot \beta - \alph \cdot 2x \le 0
 * -\alph \cdot 2x \le -\alph \cdot \beta
 *  x \ge \frac{\alph \cdot \beta}{2\alph}
 *  x \ge \frac{beta}{2}
 *
 */

void solve(){
    int n; cin >> n; 
    vector<int> v(n); 
    for(auto &i : v) cin >> i;

    int l = 0, r = 1e9;
    for(int i = 0; i < n-1; i++){
        if(v[i]<v[i+1]) r=min(r, (v[i]+v[i+1])/2);
        if(v[i]>v[i+1])l=max(l, (v[i]+v[i+1]+1)/2);
    }
    if(l > r) cout << "-1\n";
    else cout << l << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

