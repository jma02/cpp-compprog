#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, n; cin >> x >> n;
    long long balance_cap = x / n;
    vector<long long> divisors;
    vector<long long> aux;
    for(int i = 1; i <= sqrt(x); i++){
        if(x % i == 0){
            divisors.push_back(i);
            if(i != x/i) aux.push_back(x/i);
        }
        
    }
    vector<long long> merged;
    reverse(aux.begin(), aux.end());
    for(auto i : divisors) merged.push_back(i);
    for(auto i : aux) merged.push_back(i);
    auto ans = std::upper_bound(merged.begin(), merged.end(), balance_cap);
    ans--;
    cout <<  *ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

