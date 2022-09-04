#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define h first
#define w second


void solve(){
    ll n, q; cin >> n >> q;

    vector<pair<ll, ll>> r(n);    
    for(int i = 0; i < n; i++){
        cin >> r[i].h >> r[i].w;
    }

    sort(r.begin(), r.end());
    for(int i = 0; i < q; i++){
        ll loh, low, hih, hiw; cin >> loh >> low >> hih >> hiw;
        ll ans = 0;
        int left = std::upper_bound(r.begin(), r.end(), make_pair(loh+1,0LL))-r.begin();
        int right = std::lower_bound(r.begin(), r.end(), make_pair(hih, 0LL))-r.begin();

        sort(r.begin()+left, r.begin()+right, [](auto &left, auto &right){
                return left.second < right.second;
                });

        int l1 = std::upper_bound(r.begin()+left, r.begin()+right, make_pair(low+1, 0LL))-r.begin();
        int r1 = std::lower_bound(r.begin()+left, r.begin()+right, make_pair(hiw, 0LL))-r.begin();
        for(int i = l1; i < r1; i++){
            ans+=r[i].h * r[i].w;
        }
        
        cout << ans << '\n';
        sort(r.begin(), r.end());
    }
        
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

