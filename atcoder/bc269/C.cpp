#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll n; cin >> n;
    bitset<64> a(n);
    map<int,int> mp;
    ll sz=0;
    for(int i =0; i < 64; i++){
        if(a[i]){
            mp[sz]=i;
            sz++;
        }
    }
    bitset<64> ans;

    bitset<64> b;
    for(int i = 0; i < (1 << sz); i++){
        ans.reset();

        b = bitset<64>(i);
        for(int j = 0; j < sz; j++){
            if(b[j])ans.set(mp[j]);
        }
        cout << ans.to_ullong() << '\n';
    }
}

