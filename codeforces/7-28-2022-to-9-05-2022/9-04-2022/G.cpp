#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n; cin >> n;
    if(n==1){
        cout << 3 << '\n';
        return 0;
    }
    cout <<  4 + (4*n-3)/3 <<'\n';
}

