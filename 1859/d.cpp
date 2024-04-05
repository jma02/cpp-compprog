#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
// because a_i, b_i are contained in l_i, r_i, we should not travel from 
// any point [b_i, r_i] to [l_i, b_i]

// consider any point x_i to be connected to a segment l_j, r_j, if it lies on
// some l_i, b_i, such that l_j <= b_i.

// using DSU
// initiate all points i \in [0, n] to have parent i


void solve(){
    int n; cin >> n;
    vector<pair<int,int>> p(n);
    vector<int> val{0, INT_MAX};

    for(int i = 0; i < n; i++){
        int l, r, a, b;
        cin >> l >> r >> a >> b;
        p[i] = {l, b};
        val.push_back(l);
        val.push_back(b);
    }
    sort(val.begin(), val.end());
    val.erase(std::unique(val.begin(), val.end()), val.end());

    vector<int> dsu(val.size());
    iota(dsu.begin(), dsu.end(), 0);

    auto find = [&](auto find, int x) -> int {
        return dsu[x] == x ? x : dsu[x] = find(find, dsu[x]);
    };
    
    for(auto [l, b] : p){
        l = upper_bound(val.begin(), val.end(), l) - val.begin() - 1;
        b = upper_bound(val.begin(), val.end(), b) - val.begin() - 1;
        int cur = find(find, l);
        while(cur + 1 <= b) { 
            int to = find(find, cur + 1) ;
            dsu[cur] = b;
            cur = to;
        }
    }

    int q; cin >> q;
    while(q--){
        int x; cin >> x;
        int x1 = upper_bound(val.begin(), val.end(), x) - val.begin() - 1;

        if(find(find, x1) == x1) cout << x << ' ';
        else cout << val[find(find, x1)] << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

