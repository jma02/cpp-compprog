#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){   
    ll l; cin >> l;
    string a, b; cin >> a >> b;
    if(a == b) cout << "YES" << '\n';
    else if(l == 1) cout << "NO" << '\n';
    else if(a > b) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}   

int main(){
    ll T; cin >> T;
    while(T--){
        solve();
    }
}