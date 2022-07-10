#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, k; cin >> n >> k;
    ll arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    while(k--){
        ll q; cin >> q;
        ll l = -1;
        ll r = n;
        while(r > l + 1){
            ll m = l + (r - l)/2;
            if(arr[m] < q){
                l = m;
            }
            else{
                r = m;
            }
        }
        cout << r+1 << '\n';
    }
}


