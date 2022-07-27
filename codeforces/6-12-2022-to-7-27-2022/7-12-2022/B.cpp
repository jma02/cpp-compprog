#include <bits/stdc++.h>

using namespace std;

void solve(){
    set<char> seen;
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(!seen.count(s[i])){
            seen.insert(s[i]);
            ans+=2;
        }
        else{
            ans++;
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

