#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x, y, n; cin >> x >> y >> n;

    if(((n-1)*(n))/2 > y - x){
        cout << -1 << '\n';
        return;
    }
    vector<long long> ans;
    ans.push_back(y);
    int i = 0;
    int j = 1;
    int curr = y;
    while(i < n-2 && curr > 0){
        curr-=j;
        ans.push_back(curr);
        j++;
        i++;
    }
    ans.push_back(x);
    reverse(ans.begin(), ans.end());
    for(auto i : ans) cout << i << ' ';
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

