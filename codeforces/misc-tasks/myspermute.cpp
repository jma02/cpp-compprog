#include <bits/stdc++.h>
using namespace std;

void recurse(vector<int> perm){

}

void solve(){
    int N; cin >> N;
    vector<int> p(N);
    for(int &i : p) cin >> i;
    vector<int> sorted(N);
    for(int i = 0; i < N; i++) sorted[i] = p[i];

    vector<int> permute;
    int i = 0, j = 0, k = 0;
    if(p.size() > 1){
        auto iter = permute.begin();
        while(iter != permute.end()){
            cout << *iter << ' ';
            iter++;
        }
        cout << '\n';
    }
    else if(p.size() == 1) cout << -1 << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}