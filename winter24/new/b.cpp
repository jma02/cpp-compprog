#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string a, b;
    cin >> a >> b;
    long long zero_mis = 0;
    long long one_mis = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '0' && b[i] == '1') zero_mis++;
        if(a[i] == '1' && b[i] == '0') one_mis++;
    }
    long long ans = 0;
    long long diff = min(one_mis, zero_mis);
    ans += diff;
    zero_mis -= diff;
    one_mis -= diff;
    ans += zero_mis;
    ans+= one_mis;
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

