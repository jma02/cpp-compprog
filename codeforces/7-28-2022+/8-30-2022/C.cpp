#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<string> a(n), b(n), c(n);
    map<string, int> occ;
    for(int i = 0; i< n; i++){
        string x; cin >> x;
        occ[x]++;
        a[i]=x;
    }
    for(int i = 0; i< n; i++){
        string x; cin >> x;
        occ[x]++;
        b[i]=x;
    }
    for(int i = 0; i< n; i++){
        string x; cin >> x;
        occ[x]++;
        c[i]=x;
    }
    int x=0, y=0, z=0;
    for(auto i : a){
        if(occ[i]==1)x+=3;
        else if(occ[i]==2)x++;
    }
    for(auto i : b){
        if(occ[i]==1)y+=3;
        else if(occ[i]==2)y++;
    }
    for(auto i : c){
        if(occ[i]==1)z+=3;
        else if(occ[i]==2)z++;
    }

    cout << x << " " << y << " " << z <<'\n';


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

