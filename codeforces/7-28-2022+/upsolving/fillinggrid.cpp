#include <bits/stdc++.h>

using namespace std;
const int mod =1e9+7;

void solve(){
    int h, w; cin >> h >> w;
    vector<int> r(h), c(w);
    for(int &i : r)cin>>i;
    for(int &i : c)cin>>i;

    int ans=0; bool ok = true;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(i>r[j] && j>c[i])ans++;
            if(j<=c[i]-1 && r[j]==i)ok = false;
            else if(i<=r[j]-1 && c[i]==j)ok=false;
        }
    }
    if(!ok) cout << "0\n";
    else{
        int out = 1;
        for(int i = 0; i < ans; i++){
            out=out*2%mod;
        }
        cout << out << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

