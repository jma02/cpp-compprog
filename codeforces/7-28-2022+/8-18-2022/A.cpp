#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a==0 ^ c==0){
        cout<<"1\n";
        return;
    }
    if(a==0&&c==0){
        cout<<"0\n";
        return;
    }
    int ar = gcd(a,b);
    int cr = gcd(c,d);
    a /=ar; b /= ar; c/=cr; d/=cr;
    if(a==c && b==d){
        cout<<"0\n";
        return;
    }
    if(gcd(b,d)==b || gcd(b,d)==d){
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

