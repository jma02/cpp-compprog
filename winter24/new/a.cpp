#include <bits/stdc++.h>

using namespace std;

void solve(){
    set<long long> x_coord, y_coord;
    for(int i = 0; i < 4; i++){
        long long x, y; cin >> x >> y;
        x_coord.insert(x);
        y_coord.insert(y);
    }
    vector<long long> ans_x(x_coord.begin(), x_coord.end());
    vector<long long> ans_y(y_coord.begin(), y_coord.end());
    long long w = abs(ans_x[1]-ans_x[0]);
    long long l = abs(ans_y[1]-ans_y[0]);
    cout << w * l << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

