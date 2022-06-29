#include <bits/stdc++.h>

using ll = long long;
using namespace std;

void solve(ll T){
    ll N, M; cin >> N >> M;
    vector<ll> candies(N);
    for(ll i = 0; i < N; i++) cin >> candies[i];
    ll total = std::accumulate(candies.begin(), candies.end(), 0);
    cout << "CASE #"<< T << ": " << total % M << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    for(int i = 1; i <= T; i++){
        solve(i);
    }

}

