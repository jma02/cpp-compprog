#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ll N, avg, cost = 0;
    cin >> N; 
    vector<ll> sticks(N);
    for(ll &in : sticks) cin >> in;
    avg = accumulate(sticks.begin(), sticks.end(),0) / N;
    for(ll s : sticks){
        cost += abs(s - avg);
    }
    cout << cost; 
}