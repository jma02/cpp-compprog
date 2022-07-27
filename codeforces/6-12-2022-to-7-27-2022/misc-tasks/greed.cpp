#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()

void solve(){
    ll cans; cin >> cans;
    vector<ll> capacity(cans);

    ll total = 0;
    for(int i = 0; i < cans; i++){
        int r;
        cin >> r;
        total += r;
    }
    for(ll &c : capacity) cin >> c;
    sort(all(capacity));

    capacity[cans-1] + capacity[cans-2] >= total ? cout << "YES" << '\n' : cout << "NO" << '\n';
}
int main(){
    solve();
}