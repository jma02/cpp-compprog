#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a; cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    cout << a << b << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

