#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;

int N;
vector<ll> weight;

ll solve(int i, ll s1, ll s2){
    if(i == N){
        return abs(s1 - s2);
    }
    else{
        return min(solve(i+1, s1, s2+weight[i]),
        solve(i+1, s1+weight[i], s2));
    }
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        ll a; cin >> a;
        weight.pb(a);
    }
    cout << solve(0,0,0) << '\n';
}