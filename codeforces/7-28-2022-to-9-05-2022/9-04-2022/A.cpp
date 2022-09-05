#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    if(m==1){
        cout << n-1 << '\n';
    }
    else{
        cout << (m-1)*n<<'\n';
    }
}

