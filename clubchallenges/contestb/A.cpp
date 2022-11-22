#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    if(n < 3){
        cout << 1 << '\n';
        return;
    }
    n-=2;
    int f = 1;
    while(n > 0){
        n-=x;
        f++;
    }
    cout << f << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

