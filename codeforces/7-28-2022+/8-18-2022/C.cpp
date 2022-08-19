#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int a[n][m];
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char x; cin>>x;
            a[i][j]=x-'0';
            ans+=a[i][j];
        }
    }
    int sub = 0;
    for(int i = 0; i+1 < n; i++){
        for(int j = 0; j+1 < m; j++){
            int zero = 0;
            zero = max(3-(a[i][j]+a[i][j+1]+a[i+1][j+1]),zero);
            zero = max(3-(a[i][j]+a[i+1][j]+a[i+1][j+1]),zero);
            zero = max(3-(a[i][j]+a[i+1][j]+a[i][j+1]),zero);
            zero = max(3-(a[i+1][j]+a[i+1][j+1]+a[i][j+1]),zero);
            sub = max(zero,sub);
        }
    }
    if(sub==1)ans-=1;
    else if(sub == 0)ans-=2;
    cout<<max(0, ans)<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

