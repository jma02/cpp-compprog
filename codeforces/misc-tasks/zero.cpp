#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll cost = 0;
    if(2*a < b){
        cost = a * (x+y);
    }
    else{
        cost = min(x,y)*b + (max(x,y)-min(x,y))*a;
    }
    cout << cost << '\n';
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}