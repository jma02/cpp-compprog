#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int P[101], Q[101];
    for(int i = 0; i <= n; i++)cin >> P[i];
    for(int i = 0; i <= m; i++)cin >> Q[i];
    if(n > m){
        if(P[0]<0^Q[0]<0)cout << "-Infinity\n";
        else cout << "Infinity\n";
    }
    else if(m > n)cout<<"0/1\n";
    else{
        int p = P[0]/__gcd(P[0], Q[0]);
        int q = Q[0]/__gcd(P[0],Q[0]);
        bool neg = p<0 ^ q<0;
        p=abs(p); q=abs(q);
        if(neg)cout<<"-";
        cout<<p<<"/"<<q<<'\n';
    }

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

