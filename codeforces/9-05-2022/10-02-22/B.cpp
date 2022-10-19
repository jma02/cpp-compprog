#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a)cin >> i;

    long long ans= 0;

    sort(a.begin(), a.end());

    for(int i = 1; i < n; i++){
        ans+=a[i]/(2*a[0]-1);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

