#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, iq; cin >> n >> iq;
    vector<int> contests(n);
    map<int,int> freq;
    for(int i = 0; i < n; i++){
        cin >> contests[i];
        if(freq.count(contests[i])) freq[contests[i]]++;
        else freq[contests[i]] = 1;
    }
    int opt; int m = 0;
    auto iter = freq.begin(); 

    while(iter->first <= iq && iter != freq.end()){
        if(iter->second > m) opt = iter->first;
        m = max(iter->second, m);
        iter++;
    }

    vector<bool> ans(n, false);

    set<int> cand;
    for(int i = 0; i < n; i++){
        if(contests[i] <= opt) ans[i] = true;
        else cand.insert(i);
    }
    if()
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

