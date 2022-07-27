#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<string> l;
    set<string> seen;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        l.push_back(x);
        seen.insert(x);
    }
    vector<bool> ans(n, false);
    for(int i = 0; i < n; i++){
        map<string,string> bf;
        for(int j = 1; j < l[i].size(); j++){
            string x(l[i].begin(), l[i].begin()+j);
            string y(l[i].begin()+j, l[i].end());
            bf[x] = y;
        }
        bool ok = false;
        for(auto i : bf){
            if(ok) break;
            if(seen.count(i.first) && seen.count(i.second)) ok = true;
        }
        ans[i] = ok;
    }
    for(bool i : ans) cout << (i ? 1 : 0);
    cout << '\n';


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

