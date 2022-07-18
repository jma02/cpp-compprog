#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x; cin >> n >> x;
    vector<int> p(2*n);
    for(int &i : p) cin >> i;
    sort(p.begin(), p.end());
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(!ok) break;
        if(p[i]+x > p[i+n]) ok = false;
    }
    if(ok) cout << "YES";
    else cout << "NO";
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

