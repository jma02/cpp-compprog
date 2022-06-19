#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(v) v.begin(), v.end()

const int MOD = 1000000007;

using ll = long long;
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> piles(n);
    for(int &i : piles) cin >> i;
    if(n%2 == 1){
        cout << "Mike" << '\n';
        return;
    }
    else{
        int least = MOD, pos;
        for(int i = 0; i < n; i++){
            if(piles[i] < least){
                least = piles[i];
                pos = i;
            }
        }
        if(pos % 2 == 0){
            cout << "Joe" << '\n';
        }
        else{
            cout << "Mike" << '\n';
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
    return 0;
}