#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int total = 0;
    vector<int> bench(n);
    for(int &i : bench){
        cin >> i;
        total += i;
    }
    cout << max(total - m, 0) << '\n';

}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}