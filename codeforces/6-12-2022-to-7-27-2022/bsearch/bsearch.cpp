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
        ll l = 0, r = n-1;
        bool ok = false;
        while(r >= l && !ok){
            ll m = l + (r-l)/2;
            if(arr[m] < q){
                l = m + 1;
            }
            else if(arr[m] > q){
                r = m - 1;
            }
            else{
                ok = true;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}

