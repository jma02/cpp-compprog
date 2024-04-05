#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x, k;
    cin >> x >> k;
    if(!(x%k))cout << "2\n"<<(x+1)<<" -1\n";
    else cout <<"1\n"<<x<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

