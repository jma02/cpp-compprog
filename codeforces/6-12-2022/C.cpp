#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    int N; string s, t; cin >> N >> s >> t;
    if(count(all(s),'b') != count(all(t),'b')){
        cout << "NO" << '\n';
        return;
    } 
    int j = 0;
    for(int i = 0; i < N; i++){
        if(s[i] == 'b') continue;
        while(t[j] == 'b') j++;
        if(s[i] != t[j] || (s[i] == 'a' && i > j) || (s[i] == 'c' && j > i)){
            cout << "NO" << '\n';
            return;
        }
        j++;
    }
    cout << "YES" << '\n';
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