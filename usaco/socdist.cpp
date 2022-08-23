#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("socdist.in", "r", stdin);
    freopen("socdist.out", "w", stdout);
    ll n, m; cin >> n >> m;
    vector<pair<ll,ll>> a;
    for(int i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        a.push_back({x,y});
    }
    sort(a.begin(), a.end());
    ll l = 0, r = 1e18;
    ll d;
    while(l<r){
        d = (l+r+1)/2;
        ll cow = 0;
        ll pos = a[0].first;
        int i = 0;
        while(cow < n){
            if(a[i].first > pos){
                pos = a[i].first;
            }
            else if(a[i].first <= pos && a[i].second >= pos){
                pos+=d;
                cow++;
            }
            else{
                i++;
            }
            if(i > m)break;
        }

        if(cow == n){
            l=d;
        }
        else{
            r=d-1;
        }
    }
    cout<<l<<'\n';

}


