#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a, b; cin >> a >> b;
    int g = gcd(a.size(), b.size());
    int lcm = (a.size()* b.size())/g;
    int x = lcm / a.size();
    int y = lcm / b.size();
    
    string n = "", m = "";
    for(int i = 0; i < x; i++){
        n.append(a);
    }
    for(int i = 0; i < y; i++){
        m.append(b);
    }
    if(n==m)cout << n;
    else cout << -1;
    cout << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

