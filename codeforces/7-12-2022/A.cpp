#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if(s == "yes"){
        cout << "YES" << '\n';
    }
    else cout << "NO" << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

