#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> st(n);
    for(int &i : st) cin >> i;
    multimap<int,int> keys;
    for(int i = 0; i < n; i++){
        keys.insert(pair<int,int>(st[i],i));
    }
    while(k--){
        int a, b; cin >> a >> b;
        bool match = false;
        if(keys.count(a) && keys.count(b)){
            auto range_1 = keys.equal_range(a);
            auto range_2 = keys.equal_range(b);
            int l, r;
            l = range_1.first->second;
            r = range_2.first->second;
            auto iter = range_2.first;
            while(iter != range_2.second){
                if(l < iter->second) match = true;
                iter++;
            }
        }
        if(match) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

