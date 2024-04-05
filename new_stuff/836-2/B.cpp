#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x; cin >> x;
    if(x&1){
        for(int i = 0; i < x; i++) cout << x << " ";
    }
    else{
        cout << x+1 << " " << 1 << " ";
        for(int i = 0; i < x-2; i++) cout << ((x*x)-(x+2))/(x-2) << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

