#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n; cin >> n;

   string s; cin >> s;
   
   int high = -1;
   for(int i = 0 ; i < n; i++){
       high = max(high, s[i]-96);
   }
   cout << high << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

