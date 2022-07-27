#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int a = 0, b = 0;
    bool ok = true;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        int x_d = x - a;
        int y_d = y - b;
        if((x_d < 0) || (y_d < 0) || (x_d < y_d) || (y>x)) ok = false;
        a = x;
        b = y;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

