#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> arr(n);
    for(auto &i : arr) cin >> i;
    vector<long long> pref(n+1);
    for(int i = 1; i <= n; i++) pref[i] = pref[i-1]+arr[i-1];

    int ans = 1;
    for(int i = 1; i <= n; i++){
        int l = i+1, r = i+1;
        int subarrays = 1;
        bool ok = true;
        while(r <= n && ok){
            while(pref[r]-pref[l-1] < pref[i] && r <= n)r++;
            if(pref[r]-pref[l-1] == pref[i]){
                subarrays++;
                r++;
                l = r;
            }
            else ok = false;
        }
        if(r >= n && ok) ans = max(ans, subarrays);
    }
    cout << n - ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

