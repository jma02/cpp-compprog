#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    string a, b; cin >> a >> b;
    int j = m-1;
    bool ok = true, done = false;
    for(int i = n-1; i >= 0; i--){
        if(done) break;
        if(a[i] == b[j]){
            j--;
        }
        else if(a[i] != b[j]){
            if(j == 0){
                int curr = i;
                while(a[curr] != b[j] && curr >= 0) curr--;
                if(curr >= 0) ok = true;
                else ok = false;
            }
            else ok = false;
            done = true;
        }
        if(j==-1){
            ok = true;
            done = true;
        }
    }
    if(!ok)cout << "NO\n";
    else cout <<"YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

