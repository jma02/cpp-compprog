#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<int> a(n);
    set<int> u;
    bool ok = true;
    for(int &i : a){
        cin >> i;
        u.insert(i);
        if(u.size() > k) ok = false;
    }
    if(!ok){
        cout << "-1\n";
        return;
    }
    cout << k * n << '\n';
    for(int i = 0; i < n; i++){
        for(auto j : u)cout<<j<<" ";
        for(int j = u.size(); j < k; j++)cout<< *(u.begin())<<" ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

