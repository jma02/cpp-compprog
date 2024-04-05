#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n, k; cin >> n >> k;
   string s; char alph = 'a';
   for(int i = 0; i < k; i++){
      s += alph;
      alph++;
   }
   string ans;
   for(int i = 0; i < n; i++){
       ans+=s;
   }
   cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

