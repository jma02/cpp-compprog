#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(){
    ll n, l, r; cin >> n >> l >> r;
    vector<int> ans;
    ll i = 1;

    bool ok = true;
    for(int i = 1; i <= n; i++){
        if(r/i*i >= l){
            ans.push_back(r/i*i);
        }
        else{
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "YES\n";
        for(auto i : ans) cout << i << " ";
        cout << '\n';
    }
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

