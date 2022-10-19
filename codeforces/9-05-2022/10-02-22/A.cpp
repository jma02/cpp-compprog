#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    ll a = 1;

    ll l = 2, r = n; 


    while(r-l > 1){
        ll m  = (r + l)/2;
        ll seg2 = m-3, seg3 = n-m-1;
        if(seg2-1 > seg3-seg2){
            r = m;
        }
        else{
            l = m;
        }
    }
    ll seg2 = l-3, seg3 = n-l-1;

    cout << min(seg2-1, min(seg3-seg2, seg3-1)) << '\n';


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

