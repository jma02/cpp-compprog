#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin>>v[i];

    //abs(v[i-1]-i)%m
    //what is maximum value of m?
    //just v[i-1]-i
    vector<int> mod;
    for(int i = 1; i <= n; i++){
        if(abs(v[i-1]-i)>0)mod.push_back(abs(v[i-1]-i));
    }
    int ans = mod[0];
    for(int i = 1; i < mod.size(); i++){
        ans = gcd(ans, mod[i]);
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

