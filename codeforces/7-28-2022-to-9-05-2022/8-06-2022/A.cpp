#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    pair<ll,ll> a = {0,0};
    ll n; cin >> n;
    vector<pair<ll,ll>> y_neg;
    vector<pair<ll,ll>> x_pos;
    vector<pair<ll,ll>> x_neg;
    vector<pair<ll,ll>> y_pos;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        if(x && x > 0) x_pos.push_back({x,y});
        else if(x && x < 0) x_neg.push_back({x,y});
        else if(y && y > 0) y_pos.push_back({x,y});
        else y_neg.push_back({x,y});
    }
    sort(x_pos.begin(), x_pos.end());
    sort(y_pos.begin(), y_pos.end());
    sort(y_neg.begin(), y_neg.end(), std::greater<>());
    sort(x_neg.begin(), x_neg.end(), std::greater<>());

    int ans = 0;
    for(auto i : x_pos){
        ans+= abs(i.first-a.first)+abs(i.second-a.second);
        a = i;
    }
    for(auto i : y_pos){

        ans+= abs(i.first-a.first)+abs(i.second-a.second);
        a = i;
    }
    for(auto i : x_neg){
        ans+= abs(i.first-a.first)+abs(i.second-a.second);
        a = i;
    }
       for(auto i : y_neg){
        ans+= abs(i.first-a.first)+abs(i.second-a.second);
        a = i;
    }
    ans+= abs(0-a.first)+abs(0-a.second);

    cout << ans << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

