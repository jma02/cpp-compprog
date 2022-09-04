#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);

    ll n; cin >> n;
    vector<pair<ll,ll>> lg(n);
    for(int i = 0; i < n; i++){
        cin >> lg[i].first >> lg[i].second;
    }
    ll cost=LLONG_MAX;
    ll total = 0;
    sort(lg.begin(), lg.end());
    ll r = 0, l = 0;
    for(int i = 0; i < n; i++){
        if(lg[i].second > r){
            l = max(lg[i].first, r);
            total+= lg[i].second - l;
            r = lg[i].second;
        }
    }
    r=0;
    lg.push_back({lg[n-1].second, 0});
    for(int i = 0; i < n; i++){
        cost = min(max(0LL,min(lg[i+1].first,lg[i].second)-max(lg[i].first, r)), cost);
        r = max(r, lg[i].second);
    }
    cout << total-cost<<'\n';

}

