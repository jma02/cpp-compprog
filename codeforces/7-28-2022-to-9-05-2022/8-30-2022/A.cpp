#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    string t = "Timur";
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t)cout<<"YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

