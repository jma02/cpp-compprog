#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    for(ll &i : a) cin>> i;
    ll dp[n];
    dp[0]=1;
    for(int i = 1; i < n; i++){
        if(a[i]==a[i-1]){
            dp[i]=dp[i-1]+1;
        }
        else{
            dp[i]=(i)+dp[i-1]+1;
        }
    }
    ll sum = std::accumulate(dp, dp+n, 0LL);
    for(int i = 0; i < m; i++){ 
        ll p, x; cin >> p >> x; p--;
        bool l, r;
        if(a[p]==x){
            cout<<sum<<'\n';
            continue;
        }
        if(p>0 && a[p-1]==a[p])l=true;
        else l=false;
        if(p<n-1 && a[p+1]==a[p])r=true;
        else r=false;
        
        a[p]=x;
        if(p>0 &&a[p-1]==a[p] && !l)sum-=p*(n-p);
        else if(p>0&&a[p-1]!=a[p] &&l)sum+=p*(n-p);

        if(p<n-1 && a[p+1]==a[p] && !r)sum-=(p+1)*(n-(p+1));
        else if(p<n-1 && a[p+1]!=a[p] && r)sum+=(p+1)*(n-(p+1));
        cout<<sum<<'\n';
    }
}

