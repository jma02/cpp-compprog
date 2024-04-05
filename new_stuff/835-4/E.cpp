#include <bits/stdc++.h>

using namespace std;

void solve(){
   int n; cin >> n;
   int arr[n];
   for(int i = 0 ; i < n; i++) cin >> arr[i];
   int sees[n], seen[n];
   memset(sees, 0, sizeof(sees));
   memset(seen, 0, sizeof(seen));
   for(int i = 0; i < n-1; i++){
       seen[i+1] = seen[i] + arr[i];
       sees[n-i-2] = sees[n-i-1] + (1-arr[n-i-1]);
   }
   /*
   cout << "DBG ";
   for(auto i : seen) cout << i << " ";
   cout << '\n';
   for(auto i : sees) cout << i <<  " ";
   cout << '\n';
   */
   int flip = 0;
   int best = 0;
   for(int i = 0; i < n; i++){
       if(arr[i]){
           if((seen[i] >= best) && (seen[i] > sees[i])){
               best = seen[i];
               flip = i;
           }
       }
       else{
           if((sees[i] >= best) && (sees[i] > seen[i])){
               best = sees[i];
               flip = i;
           }
       }
   }
   long long ans = 0;
   for(int i = 0; i < n; i++){
       if(arr[i])ans+=sees[i];
   }
//   cout << "DBG " << ans << '\n';
   arr[flip] = (1-arr[flip]);
   memset(sees, 0, sizeof(sees));
   for(int i = 0; i < n-1; i++){
       sees[n-i-2] = sees[n-i-1] + (1-arr[n-i-1]);
   }
   long long ans2 = 0;
   for(int i = 0; i < n; i++){
       if(arr[i])ans2+=sees[i];
   }
//   cout << "DBG " << ans2 << '\n';
//   cout << "DBGFLIP " << flip << '\n';
   ans = max(ans2, ans);
   cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

