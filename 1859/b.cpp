#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve(){
    long long n; cin >> n;
    vector<vector<long long>> arr(n);
    vector<long long> a, b;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        long long m; cin >> m;
        for(int j = 0; j < m; j++){
            long long x; cin >> x;
            arr[i].push_back(x);
        }
        sort(arr[i].begin(), arr[i].end());
        a.push_back(arr[i][0]);
        b.push_back(arr[i][1]);
    }
    if(arr.size() == 1){
        cout << arr[0][0] << '\n';
        return;
    }
    sort(b.begin(), b.end());
    b[0] = min(b[0], *min_element(a.begin(), a.end()));
    cout << std::accumulate(b.begin(), b.end(), 0LL) << '\n'; 
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

