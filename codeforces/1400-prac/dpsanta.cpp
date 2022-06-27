#include <bits/stdc++.h>

using namespace std;
using ll = long long;

set<ll> seen;
ll ans = 0;
void solve(ll x, ll depth){
    if(x == 1){
        seen.insert(1);
        return;
    }
    else if(x == 2){
        seen.insert(2);
        return;
    }
    else if(x - depth <= depth){
        return;
    }
    seen.insert(x-depth);
    seen.insert(depth);
    solve(x-depth, depth+1);
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll k; cin >> k;
    solve(k, 1);
    ll sum = 0;
    auto iter = seen.begin();
    
    while(sum < k){
        sum += *iter;
        ans++;
        iter++;
    }
    cout << ans << '\n';
    iter = seen.begin();
    for(ll i = 0; i < ans; i++){
        cout << *iter << ' ';
        iter++;
    }
}

