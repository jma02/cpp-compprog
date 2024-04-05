#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> seq(n);
    for(auto &i : seq) cin >> i;

    int i = 0;
    int j = n-1;
    bool ok = true;
    while(ok && i < n){
        if(seq[i]-1 > j) ok = false;
        while(seq[j] - i == 0 && j >= 0)j--;
        if(j == -1) ok =false;
        i++;
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

