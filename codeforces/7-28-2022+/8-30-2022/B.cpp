#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n), b(n);
    string p, l; cin >> p >> l;
    for(int i = 0;i < n; i++){
        char x = p[i];
        if(x == 'G'||x=='B')a[i]=1;
        else a[i]=0;
    }
    for(int i = 0;i < n; i++){
        char x = l[i];
        if(x == 'G'||x=='B')b[i]=1;
        else b[i]=0;
    }
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(a[i]!=b[i])ok=false;
    }
    if(ok)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

