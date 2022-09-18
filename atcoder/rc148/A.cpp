#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &i : a)cin>>i;

    int g = 0;
    vector<int> b;
    for(int i = 0; i < n-1; i++){
        b.push_back(abs(a[i]-a[i+1]));
    }
    for(int i = 0; i < n-1; i++){
        g = gcd(g, b[i]);
    }

    if(g==1)cout <<"2\n";
    else cout << "1\n";
}


