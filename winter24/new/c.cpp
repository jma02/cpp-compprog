#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, charge, d, c;
    cin >> n >> charge >> d >> c;
    vector<long long> m;
    m.push_back(0);
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        m.push_back(x);
    }

    for(int i = 1; i < n+1; i++){
        charge -= min(d*(m[i] - m[i-1]), c);
    }
    if(charge > 0) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

