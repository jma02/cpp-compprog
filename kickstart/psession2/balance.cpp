#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(int i){
    ll L, R; cin >> L >> R;
    if(L == 0 || R == 0) cout << "CASE #" << i << ": "<<0<<'\n';
    else{
        cout << "CASE #"<<i<<": " << min(L, R)*(min(L,R)+1)/2 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    for(int i = 1; i <= T; i++){
        solve(i);
    }
}

