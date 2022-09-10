#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n; cin >> n;
    vector<ll> t(2*n-1);
    for(int i = 0; i < n; i++)cin >> t[i];
    for(int i = n; i < 2*n - 1; i++)t[i]= t[i-n];

    ll ans = -1;
    for(int i = 0; i < n; i++){
        ll ptr = t[i];
        ll curr = 0;
        for(int j = i; j < n+i; j++){
            if((t[j] == (ptr+1)%n) || (t[j] == (ptr+n-1)%n) || (t[j]==ptr))curr++;
            ptr++;
            ptr%=n;
        }
        ans = max(curr, ans);
    }
    cout << ans << '\n';
}

