#include <bits/stdc++.h>

using namespace std;

void solve(){
    string b; cin >> b;
    string fin; set<int> excl;
    vector<int> s;
    if(b[0] == '?') b[0] = '(';
    if(b[b.size()-1] == '?') b[b.size()-1] = ')';

    for(int i = 0; i < b.size(); i++){
        if(b[i] == '(') s.push_back(i);
        else if(b[i] == ')' && s.size() > 0){
            excl.insert(s.back());
            s.pop_back();
            excl.insert(i);
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(!excl.count(i)) fin.push_back(b[i]);
    }
    int q1 = 0, q2 = 0; bool ok = true;
    for(int i = 0; i < fin.size()-1; i++){
        if
    }
    cout << fin << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

