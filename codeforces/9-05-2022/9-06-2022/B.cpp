#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long;

void solve(){
    ll n, m; cin >> n >> m;
    if(m < n){// cant
        cout << "NO\n";
        return;
    }
    else if(n==m){
        cout << "YES\n";
        for(int i = 0; i < n; i++)cout << "1 ";
        cout << '\n';
        return;
    }
    else if(n%2==0 && m%2==0){ //always works
        cout << "YES" << '\n';
        for(int i = 0; i < n-2; i++)cout<<"1 ";
        cout << (m-(n-2))/2 << " " << (m-(n-2))/2 << '\n';
        return;
    }
    else if(n%2==0 && m%2){ //cant do this
        cout << "NO\n";
        return;
    }
    else{ //should always work
        cout << "YES\n";
        cout << m-n+1 << " ";
        for(int i = 0; i < n-1; i++){
            cout << "1 ";
        }
        cout << '\n';
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

