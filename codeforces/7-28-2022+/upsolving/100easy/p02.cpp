#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> cand(n);
    for(int &i : cand) cin>>i;
    vector<int> pref(n+1);
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i-1]+cand[i-1];
    }
    int a, b; cin >> a >> b;
    cout << pref[b+1]-pref[a] << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

