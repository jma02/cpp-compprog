#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string s = "";
    for(int i = 0; i < m; i++) s.push_back('B');
    vector<int> seq(n); 
    for(int &i : seq) cin >> i;
    
    for(int i = 0; i < n; i ++){
        int x = m - seq[i] + 1;
        int y = seq[i];
        if(x <= y && s[x-1] == 'B') s[x-1] = 'A';
        else if(s[y-1] == 'B') s[y-1] = 'A';
        else s[x-1] = 'A';
    }
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

