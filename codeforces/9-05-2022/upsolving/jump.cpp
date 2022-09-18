#include <bits/stdc++.h>

using namespace std;
using ll = long long;
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.first;
}
void solve(){
    string s;cin>>s;
    int n = s.size();
    vector<pair<ll,ll>> ans;
    for(ll i = 1; i < n-1; i++){
        ans.push_back({s[i]-'a', i+1});
    }
    ll dis = abs((s[n-1]-'a') - (s[0]-'a'));
    ll l = min(s[0]-'a', s[n-1]-'a');
    ll r = max(s[0]-'a', s[n-1]-'a');
    
    sort(ans.begin(), ans.end(), cmp);
    ll lo = lower_bound(ans.begin(), ans.end(), make_pair(l, 0LL), cmp)-ans.begin();
    ll hi = upper_bound(ans.begin(), ans.end(), make_pair(r, 0LL), cmp)-ans.begin();
    cout << dis << " " << hi - lo + 2 << '\n'; 
    cout << 1 << " ";
    if(s[0]-'a' > s[n-1]-'a'){
        for(int i = hi-1; i > lo-1; i--)cout<<ans[i].second << " ";
    }
    else{
        for(int i = lo; i < hi; i++) cout << ans[i].second << " ";
    }
    cout << n << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

