#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> ans(n+1);

    for(int i = 0; i < n; i++){
        if(s[i]=='L')ans[0]+=i;
        else ans[0]+=(n-(i+1));
    }

    int i = 1;
    int l = 0, r = n-1;
    int mp1= n%2 ? (n-1)/2 -1 : n/2 - 1;
    int mp2 = n%2 ? (n+1)/2 : n/2;
    ll curr = ans[0];
    while(l<=mp1 || r>=mp2){
        while(s[l]=='R'&& l <=mp1)l++;
        while(s[r]=='L'&& r >=mp2)r--;
        
        if(r-mp2 >= mp1-l && s[r]=='R' && r>=mp2){
            curr += 2*r - n + 1;
            ans[i]=curr;
            i++;
            r--;
        }
        else if(mp1-l >= r-mp2 && s[l]=='L' && l <= mp1){
            curr += n - 2*l - 1;
            ans[i]= curr;
            i++;
            l++;
        }
   }
    while(i < n+1){
        ans[i]=ans[i-1];
        i++;
    }
    for(int i = 1; i < n+1; i++) cout << ans[i] << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

