#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a;
    map<int,int> zero;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        a.push_back(x);
        zero[x]=x;
    }
    set<int> un; 
    int ans=0;
    for(int i = 0; i < n-1; i++){
        if(zero[a[i]]>0)un.insert(a[i]);
        if(zero[a[i+1]]<zero[a[i]]){
            ans+=un.size();
            for(auto x : un) zero[x]=0;
            un.clear();
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

