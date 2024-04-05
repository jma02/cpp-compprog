#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    cout << n- ((((n*(n+1))/2)-1) % n) << " ";
    for(int i = 2; i <= n; i++){
        cout << i << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

