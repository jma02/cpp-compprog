#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll N = 0, cost = 0, median = 0;
    cin >> N; 

    vector<ll> sticks(N);
    for(ll &in : sticks) cin >> in;
    sort(sticks.begin(), sticks.end());
    median = N % 2 == 1 ? sticks[N/2+1] : 
    sticks[N/2 - 1];

    for(ll s : sticks){
        cost += abs(median - s);

    }
    cout << cost;
}

