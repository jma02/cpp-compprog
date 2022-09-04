#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct mtn{
    int l, r;
};

bool cmp(mtn a, mtn b){
    if(a.l != b.l)return a.l < b.l;
    else return a.r > b.r;
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("mountains.in", "r", stdin);
    freopen("mountains.out", "w", stdout);

    ll n; cin >> n;
    vector<pair<ll,ll>> pts(n);
    for(int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        pts[i]={x,y};
    }
    vector<mtn> xint(n);
    for(int i = 0; i < n; i++){
        int x1 = pts[i].first-pts[i].second;
        int x2 = pts[i].first+pts[i].second;
        xint[i]={x1,x2};
    }
    int ans = n; 
    sort(xint.begin(), xint.end(), cmp);
    int rp=-1;
    for(int i = 0; i < n; i++){
        if(xint[i].r > rp){
            rp = xint[i].r;
        }
        else{
            ans--;
        }
    }
    cout << ans << '\n';
}

