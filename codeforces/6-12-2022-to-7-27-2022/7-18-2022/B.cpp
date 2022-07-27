#include <bits/stdc++.h>

using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

void solve(){
    int n; cin >> n;
    vector<int> col(n);
    set<int> seen;
    for(int &i : col){
        cin >> i;
        seen.insert(i);
    }
    vector<long long> tow(n, 0);
    set<int> enc;
    unordered_map<long long, long long, custom_hash> dissum;
    for(int i = 0; i < n; i++){
        if(!enc.count(col[i])){
            tow[col[i]-1]++;
            dissum[col[i]] = i;
            enc.insert(col[i]);
            continue;
        }
        if((i-dissum[col[i]] + 1) % 2 == 0){
            tow[col[i]-1]++;
            dissum[col[i]] = i;
        }
    }

    for(auto i : tow) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
}

