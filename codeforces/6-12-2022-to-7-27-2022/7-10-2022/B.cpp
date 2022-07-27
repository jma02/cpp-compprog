#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a; cin >> a;
    map<int, set<char> > seen; 
    int j = 0;
    for(int i = 0; i < a.size(); i++){
        seen[j].insert(a[i]);
        if(seen[j].size() > 3){
            j++;
            seen[j].insert(a[i]);
        }
    }
    if(seen[j].size() > 0)j++;
    cout << j << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
    
}

