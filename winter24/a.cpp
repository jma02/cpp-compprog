#include <bits/stdc++.h>

using namespace std;

void solve(){
   // find parity of number of negs. 
   // if even, change one to zero
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    int par = 0;
    bool ok = true;
    for(auto i : arr){
        if(i < 0) par++;
        if(i==0) ok = false;
    }
    if(par%2 == 1){
        cout << 0 << '\n';
    }
    else if(!ok) cout << 0 << '\n';
    else {
        cout << 1 << '\n';
        cout << 1 << " " << 0 << '\n';
    }


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

