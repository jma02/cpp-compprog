#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> s;
    set<int> res;
    for(int &i : a){
        cin >> i;
        s[i]++;
    }
    for(auto i : s){
        if(i.second > 1){
            res.insert(i.first);
        }
    }
    int ans=0, done=0;
    if(res.size() ==0 ){
        cout << "0\n";
        return;
    }
    for(int i = 0; i<n; i++){
        ans++;
        if(res.count(a[i])){
            s[a[i]]--;
            if(s[a[i]] == 1) done++;
        }
        if(done == res.size()) break;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

