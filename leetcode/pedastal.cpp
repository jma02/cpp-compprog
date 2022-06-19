#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;
    if(N % 3 == 0){
        cout << N/3 << " " << N/3 + 1 << " " << N/3 - 1; 
    }
    else if(N % 3 == 1){
        cout << N/3 << " " << N/3 + 2 << " " << N/3 - 1;
    }
    else{
        cout << N/3 + 1 << " " << N/3 + 2 << " " << N/3 - 1;
    }
    cout << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}