#include <bits/stdc++.h>

using namespace std;

void solve(){
    string w; cin >> w;
    if(w.size()>10){
        cout << w[0]<<w.size()-2<<w[w.size()-1]<<'\n';
    }
    else cout << w << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

