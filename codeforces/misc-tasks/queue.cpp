#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define f first
#define s second
void solve(){
    int N; cin >> N;
    vector<int> start(N), finish(N);
    for(int &i : start) cin >> i;
    for(int &i : finish) cin >> i;
    queue<pair<int,int>> q;
    q.push(mp(start[0], finish[0]));
    cout << finish[0] - start[0] << " ";
    for(int i = 1; i < N; i++){
        q.push(mp(start[i], finish[i]));
        int delay = max(q.back().f - q.front().s, 0);
        cout << q.back().s - delay - q.front().s << " "; 
        q.pop();
    }
    cout << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}