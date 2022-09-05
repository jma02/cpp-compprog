#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> pres(n);
    vector<int> loc(n+1);
    vector<int> list(m);

    for(int &i : pres) cin >> i;
    for(int &i : list) cin >> i;

    for(int i = 0; i < n; i++)loc[pres[i]] = i;

    int searched = -1;
    ll ans = 0;
    for(int i = 0; i < m; i++){
        if(loc[list[i]] > searched){
            ans+=2*(loc[list[i]] - i)+1;
            searched = loc[list[i]];
        }
        else ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

