#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> b(n);
    for(auto &i : b) cin >> i;

    vector<int> a;
    a.push_back(b[0]);
    for(int i = 1; i < n; i++){
        if(b[i] < a.back())a.push_back(1);
        a.push_back(b[i]);
    }
    cout << a.size() << '\n';
    for(auto i : a) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

