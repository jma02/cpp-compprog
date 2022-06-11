#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    int N; string A, B;
    cin >> N >> A >> B;
    set<pair<char,char>> op;
    set<char> taken;
    for(int i = 0; i < N; i++){
        op.insert(mp(A[i], B[i]));
    }
    int ans = 0;
    for(auto iter : op){
        if(iter.f != iter.s && !taken.count(iter.s)){
            ans+=1;
            taken.insert(iter.s);
        }
    }
    cout << ans << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}