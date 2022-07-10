#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;
    sort(arr.begin(), arr.end());
    ll k; cin >> k; 
    while(k--){
        ll a, b; cin >> a >> b;
        ll l = -1, r = n;
        ll ai;
        while(r > l + 1){
            ll m = l + (r-l)/2;
            if(arr[m] < a){
                l = m;
            }
            else{
                r = m;
            }
        }
        ai = r;
        l = -1, r = n;
        ll bi;
        while(r > l + 1){
            ll m = l +(r-l)/2;
            if(arr[m] <= b){
                l = m;
            }
            else{
                r = m;
            }
        }
        bi = l;
        cout << bi - ai + 1 << ' ';
    }

}

