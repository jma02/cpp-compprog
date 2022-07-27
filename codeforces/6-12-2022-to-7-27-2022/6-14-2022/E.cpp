#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

#define INF 100000001

typedef long long ll;
using namespace std;

void solve(){
    int N; int s; cin >> N >> s;
    vector<int> arr(N);
    int total = 0;
    for(int &i : arr){
        cin >> i;
        total += i;
    }
    if(total < s){
        cout << -1 << '\n';
        return;
    }
    else if(total == s){
        cout << 0 << '\n';
        return;
    }
    int ans = INF;
    int ones = 0;
    int j = 0;
    for(int i = 0; i < N; i++){
        ones += arr[i];
        while(j < i && ones > s){
            ones -= arr[j];
            j++;
        }
        if(ones == s) ans = min(ans, N-(i - j + 1));
    }

    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
}