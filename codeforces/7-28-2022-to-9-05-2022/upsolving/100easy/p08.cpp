#include <bits/stdc++.h>

using namespace std;

void solve(){
   long long n, L, a; cin >> n >> L >> a;
   long long ans = 0;
   vector<long long> cus(n);
   vector<long long> serve(n);
   for(int i = 0; i < n; i++){
       long long t, l; cin >> t >> l;
       cus[i] = t;
       serve[i] = l;
   }
   long long prev = 0; 
   for(int i = 0; i < n; i++){
       ans+= max(0LL, cus[i]-prev)/a;
       prev = max(prev,cus[i])+serve[i];
   }
   ans+= max(0LL, L-prev)/a;
   cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

