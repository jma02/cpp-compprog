#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >> n;
    int r[n], a[n];
    memset(r, 0, sizeof(r));
    for(int i = 0; i<n; i++)cin>>a[i];
    
    for(int i = 0; i<n; i++){
        r[(n-i+a[i])%n]++;
        r[(n-i+a[i]+1)%n]++;
        r[(n-i+a[i]-1)%n]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans=max(ans, r[i]);
    }
    cout << ans << '\n';
}

