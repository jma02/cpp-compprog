#include <bits/stdc++.h>

using namespace std;

// must park at lowest position.
void solve(){
    int n; cin >> n;
    vector<int> park; 
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        park.push_back(x);
    }
    sort(park.begin(), park.end());
    cout << 2*(park[n-1]-park[0]) << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    
}

