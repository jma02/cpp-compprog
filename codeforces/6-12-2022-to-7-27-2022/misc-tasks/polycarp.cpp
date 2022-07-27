#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
void solve(){
    int n; cin >> n;
    vector<int> contests(n);
    for(int &i: contests) cin >> i;
    sort(all(contests));

    int pos = 1;
    for(int i = 0; i < n; i++){
        if(pos <= contests[i]) pos++;
    }
    cout << pos-1 << '\n';
}

int main(){
    solve();
}