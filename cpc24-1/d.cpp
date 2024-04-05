#include <bits/stdc++.h>

using namespace std;

void solve(){
    // cases,
    // cong 0, done
    // cong 1, find something cong 1
    // cong 2, find something cong 2
    // cong 1, add one,
    // cong 2, add 2.
    // we only add 2 if there is no element cong 2
    int n; cin >> n;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    long long sum = 0;
    for(int i : a) sum += i;
    if(sum % 3 == 0){
        cout << 0 << '\n';
        return;
    }
    if(sum % 3 == 1) {
        for(auto i : a) {
            if(i % 3 == 1){
                cout << 1 << '\n';
                return;
            }
        }
        cout << 2 << '\n';
        return;
    }
    else {
        cout << 1 << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t
    while(t--) solve();
}

