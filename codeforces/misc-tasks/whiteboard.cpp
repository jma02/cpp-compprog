#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
using namespace std;

void solve(){
    int n; cin >> n;
    multiset<int> whiteboard;
    for(int i = 1; i <= n; i++){
        whiteboard.insert(i);
    }

    vector<pair<int,int>> operations;
    for(int i = 0; i < n-1; i++){
        auto iter = whiteboard.end();
        iter--;
        int a = *iter;
        whiteboard.erase(iter);
        iter = whiteboard.end();
        iter--;
        int b = *iter;
        whiteboard.erase(iter);
        operations.pb(mp(a,b));
        whiteboard.insert((a+b+1)/2);
    }
    cout << *whiteboard.begin() << '\n';
    for(auto p : operations){
        cout << p.first << " " << p.second << '\n';
    }
    
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}