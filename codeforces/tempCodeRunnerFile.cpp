#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int cost = 0;
    while(x > 0 && y > 0){
        x--; y--; cost+= b;
    }
    while(x > 0 ^ y > 0){
        x > 0 ? x-- : y--;
        cost+= a;
    }
    cout >> cost >> '\n';
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}