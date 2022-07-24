#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x; cin >> x;
    vector<int> d(4);
    for(int i = 1; i <= 3; i++) cin >> d[i];
    int d1 = d[x];
    if(d1 == 0){
        cout << "NO" << '\n';
        return;
    }
    int d2 = d[d1];
    if(d2 == 0){
        cout << "NO" << '\n';
        return;
    }
    cout << "YES" << '\n';


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

