#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >>n;
    cout << n;
    for(int i = 1; i <= n-1; i++){
        cout << " ";
        cout << i;
    }
    cout << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

