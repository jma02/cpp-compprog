#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    if(n==1){
        cout<<2<<'\n';
        return;
    }
    if(n%3==0){
        cout<<n/3<<'\n';
        return;
    }
    if(n%3==2){
        cout<< n/3+1<<'\n';
        return;
    }
    else{
        cout<<n/3+1<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

