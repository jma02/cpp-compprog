#include <bits/stdc++.h>

using namespace std;

void solve(){
    char a, b, c ,d; cin >> a >> b >> c >> d;
    set<char> ans;

    ans.insert(a);
    ans.insert(b);
    ans.insert(c);
    ans.insert(d);
    
    cout << ans.size()-1<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

