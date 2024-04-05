#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k, m; cin >> n >> k >> m;
    string s; cin >> s;
    vector<set<char>> window(n);
    bool ok = true;
    
    int u = 0;
    int v = 0;
    for(int i = 0; i < m; i++){
        if(window[u].count(s[i])){
            m--;
        }
        else{
            window[u].insert(s[i]);
            v++;
        }
        if(v == k){
            u++;
            v = 0;
        }
    }
    if(m < n * k) {
        cout << "NO\n";
        string ans;
        char last = 'a' + k - 1;
        cout << "DEBUG "<< last << '\n';
        for(auto w : window) {
            char c = 'a';
            while(w.count(c)) c++;
            if(c >= last) ans += 'a';
            else ans += c;
        }
        cout << ans << '\n';
    }
    else {
        cout << "YES\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

