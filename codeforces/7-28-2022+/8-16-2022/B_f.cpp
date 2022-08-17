#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    if(k%4==0){
        cout <<"NO\n";
        return;
    }
    cout << "YES\n";
    if(k&1){
        for(int i = 1; i <= n; i+=2){
            cout << i << " "<<i+1<<'\n';
        }
    }   
    else{
        bool swap = true;
        for(int i = 1; i <= n; i+=2){
            if(swap)cout<< i+1 << " "<<i << '\n';
            else cout<<i << " "<< i+1<<'\n';
            swap=!swap;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

