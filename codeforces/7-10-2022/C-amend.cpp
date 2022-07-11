#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    map<int,vector<int>> st;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        st[x].push_back(i);
    }
    while(k--){
        int a, b; cin >> a >> b;
        bool ok = false;
        if(st.count(a) && st.count(b)){
            int l = st[a][0];
            int r = st[b].back();
            int i = 1;
            if(l < r) ok = true;
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << '\n';
 
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

