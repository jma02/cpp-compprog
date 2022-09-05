#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, k; cin >> n >> k;
    vector<long long> a(n);
    for(int i=0;i < n; i++){
        cin >> a[i];
    }
    long long ans = 0;
    for(int i = n-1; i>=k;i--){
        if(a[i]<=k)ans++;
    }
    cout <<ans<<'\n';
}


int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

