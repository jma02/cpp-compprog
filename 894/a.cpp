#include <bits/stdc++.h>

using namespace std;

void solve(){
    bool ok = false;
    int n, m; cin >> n >> m;
    vector<string> tab(n);
    for(auto &i : tab) cin >> i;

    char vika[4] = {'v', 'i', 'k', 'a'};

    int idx = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(tab[j][i] == vika[idx]){
                idx++;
                if(idx>3)ok=1;
                break;
            }
        }
    }
    if(ok)cout<<"YES\n";
    else cout <<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

