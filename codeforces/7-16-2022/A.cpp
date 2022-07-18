#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> nums(n);
    for(int &i : nums) cin >> i;
    bool ok = true;
    for(int i = 1; i < n; i++){
        if(nums[i] % nums[0] != 0) ok =false;
    }
    if(ok) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

