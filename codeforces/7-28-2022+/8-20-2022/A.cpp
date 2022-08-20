#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, m; cin >> n >> m;
    if(n==1&&m==1)cout<<0<<'\n';
    else cout << max(n-1, m-1) + 2*(min(n-1,m-1))+1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

