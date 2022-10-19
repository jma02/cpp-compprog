#include <bits/stdc++.h>

using namespace std;
//
void solve(){
    int n; cin >> n;
    vector<int> d(n);
    for(auto &i : d)cin>>i;
    vector<int> a(n);
    a[0]=d[0];
    for(int i = 1; i < n; i++){
        if(d[i]==0){
            a[i]=a[i-1];
            continue;
        }
        else if(d[i]<=a[i-1]){
            cout << -1 <<'\n';
            return;
        }
        else a[i]=d[i]+a[i-1];
    }
    for(auto i : a) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

