#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a==0&&c==0){
        cout<<"0\n";
        return;
    }
    ll ar = gcd(a,b);
    ll cr = gcd(c,d);
    a/=ar; b/=ar; c/=cr; d/=cr;
    ll x = a*d;
    ll y = b*c;
    if(a==c && b==d){
        cout<<"0\n";
        return;
    }
    if(a==0^c==0){
        cout<<"1\n";
        return;
    }
    if(x%y==0 || y%x==0){
        cout<<"1\n";
        return;
    }
    else cout<<"2\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

