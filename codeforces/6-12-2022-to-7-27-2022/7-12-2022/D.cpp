#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    set<string> seen;
    vector<string> words;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        seen.insert(x);
        words.push_back(x);
    }
    vector<bool> ans(n,false);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            bool ok = true;
            if(words[j].size() >= words[i].size()) continue;
            for(int k = 0; k < words[j].size(); k++){
                if(words[i][k] != words[j][k]){
                    ok = false;
                    break;
                }
            }  
            if(!ok) continue;
            string search = "";
            for(int k = words[j].size(); k < words[i].size(); k++){
                search.push_back(words[i][k]);
            }
            ans[i] = seen.count(search);
            if(ans[i]) break;
        }
    }
    for(auto i: ans) cout << (i ? 1 : 0);
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

