#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define make_pair mp

void solve(){
    int N, k; cin >> N >> k;
    string stripe; cin >> stripe;
    int sum = 0;
    vector<int> pref(N+1, 0); 
    for(int i = 1; i < N+1; i++){
        if(stripe[i-1] == 'B') sum++;
        pref[i] = sum;
    }
    int max_partial_sum = 0;
    int i = 0;
    while(i + k <= N){
        int partial_sum = pref[i+k] - pref[i];
        max_partial_sum = max(max_partial_sum, partial_sum);
        i++;
    }
    cout << k - max_partial_sum << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}