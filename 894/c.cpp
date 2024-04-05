#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x; cin >> x;
    long long l = 0, r = 1e10;
    while(l < r){
        long long m = (l+r+1)/2;
        if((m*(m-1))/2 <= x)l=m;
        else r=m-1;
    }
    long long add = x - (l*(l-1))/2;
    cout << l + add << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

