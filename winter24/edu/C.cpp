#include <bits/stdc++.h>

using namespace std;

const long long INF = INT_MAX;

void solve(){
    int n; cin >> n;
    vector<long long> a(n);
    for(auto &i : a) cin >> i;
    vector<int> closest(n);
    closest[0] = 1; closest[n-1] = n-2;
    for(int i = 1; i < n-1; i++){
        closest[i] = a[i] - a[i-1] > a[i+1] - a[i] ? i + 1 : i - 1;
    }
    vector<long long> forward(n);
    vector<long long> backward(n);

    for(int i = 1; i < n; i++){
        if(closest[i-1] == i) forward[i] = forward[i-1]+1;
        else forward[i] = forward[i-1] + (a[i] - a[i-1]);
        if(closest[n-i] == n-i-1) backward[n-i-1] = backward[n-i]+1;
        else backward[n-i-1] = backward[n-i] + (a[n-i] - a[n-i-1]);
    }
    for(auto i : backward) cout << i << ' ';
    cout << '\n';
    int m; cin >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        x--; y--;
        x < y ? (cout << forward[y] - forward[x] << '\n') :
                (cout << backward[n-x-2] - backward[n-y-2] << '\n');
        cout << "dbg " << n - x - 2  << " " << n - y - 2 << '\n';
    }
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}

