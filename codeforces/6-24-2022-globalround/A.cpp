#include <bits/stdc++.h>
using ll = long long;
using namespace std;

void solve(){
    ll n, z; cin >> n >> z;
    vector<ll> a(n);
    for(ll &i : a) cin >> i;
    sort(a.begin(), a.end());
    ll max_out = 0;
    bool finished = false;
    while(!finished){
        max_out = max(a[n-1] | z, a[0] | z);
        z = a[n-1] & z;
        if(max_out > a[n-1]){
            a[n-1] = max_out;
        }
        else{
            finished = true;
        }
    }
    cout << max_out << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}

