#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(int T){
    ll N, Q; cin >> N >> Q;
    string B; cin >> B;
    vector<map<char,int>> pref(N+1);
    for(int i = 0; i < N; i++){
        pref[0][B[i]] = 0;
    }
    for(int i = 1; i <= N; i++){
        pref[i] = pref[i-1];
        pref[i][B[i-1]]++;
    }
    ll ans = 0;
    while(Q--){
        ll L, R; cin >> L >> R;
        vector<ll> cnt;
        for(auto i : pref[R]){
            cnt.push_back(i.second - pref[L-1][i.first]); 
        }
        ll oddcnt = 0;
        for(ll i : cnt){
            if(i % 2 == 1) oddcnt++;
            if(oddcnt > 1){
                break;
            }
        }
        if(oddcnt <= 1) ans++;
    }
    cout << "CASE #"<<T<<": "<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    for(int i  = 1; i <= T; i++){
        solve(i);
    }
}

