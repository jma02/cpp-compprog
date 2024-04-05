#include <bits/stdc++.h>

using namespace std;

void solve(){
    vector<int> ans; 
    int a, b, c;
    cin >> a >> b >> c;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    sort(ans.begin(), ans.end());

    cout<< ans[1] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

