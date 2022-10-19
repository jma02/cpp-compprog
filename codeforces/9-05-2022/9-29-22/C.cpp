#include <bits/stdc++.h>

using namespace std;
const int MOD = 998244353;
using ll = long long;

long long inverse(long long a, long long b){
 return 1<a ? b - inverse(b%a,a)*b/a : 1;
}

ll fact[61], inv[61];
void solve(){
   int n; cin >> n;
   ll j = 1;
   ll ans = 0;
    
   for(int i = n-1; i>0; i-=3){
       ll res=fact[i]*inv[n/2-j];
       res%=MOD;
       res*= inv[i-(n/2-j)];
       res%=MOD;
       ans+=res;
       ans%=MOD;
       j++;
   }
   ll res = fact[n]*inv[n/2];
   res%=MOD;
   res*= inv[n-n/2];
   res%=MOD;
   res-=ans;
   res%=MOD;
   res-=1;
  cout << ans << " "<< res << " " << 1 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    fact[0]=1;
    for(int i = 1; i <= 60; i++){
        fact[i]=i*fact[i-1]%MOD;
    }

   for (int i=1; i<=60; ++i){
	inv[i] = inverse(fact[i], MOD);
   }   
   int t; cin >> t;
   while(t--) solve();
}

