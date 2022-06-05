#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve(){
    int l, m; cin >> l >> m;
    int ones = 0, zeros = 0;
    string binary; cin >> binary;
    for(char c : binary){
        if(c == '1') ones++;
        else zeros++;
    }
    int distance_start = 0;
    auto iter = binary.begin();
    while(*iter != '1' && iter != binary.end()){
        iter++;
        distance_start++;
    }
    int distance_end = 0;
    iter = binary.end() - 1;
    while(*iter != '1' && iter != binary.begin() - 1){
        iter--;
        distance_end++;
    }
    int sum = ones*11;
    if(ones > 0 && distance_end <= m){
        m -= distance_end;
        sum -= 10;
        ones -= 1;
    }
    if(ones > 0 && distance_start <= m){
        sum -= 1;
    }
    cout << sum << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}