#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string ans; cin >> ans;

    int res = n;
    for(int i = 0; i < 2*n-1; i++){
        if(ans[i]==')'&&ans[i+1]=='(')res--;
    }
    cout << res << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

