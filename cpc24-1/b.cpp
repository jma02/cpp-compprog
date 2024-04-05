#include <bits/stdc++.h>

using namespace std;

void solve(){
   int a = 0; 
   int b = 0;
   string s; cin >> s;
   for(auto i : s){
       if(i == 'A')a++;
       else b++;
   }
   if(b > a){
       cout << "B\n";
   }
   else cout << "A\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

