#include <bits/stdc++.h>

using namespace std;

void solve(){
   long long x, y, k; cin >> x >> y >> k;
   // gain x-1 sticks per purchase
   // need y*k + k sticks
   // have 1 stick
   // need y*k + k - 1 more sticks

    cout << ((y*k + k - 1) + (x-1) - 1) / (x-1) + k << '\n';

   
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

