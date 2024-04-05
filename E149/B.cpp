#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int x = 100;
    set<int> bf;
    bf.insert(x);
    for(int i = 1; i < n; i++){
       if(s[i]==s[i-1])x++;
       else x=100;
       bf.insert(x);
    }
    cout << bf.size()+1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

