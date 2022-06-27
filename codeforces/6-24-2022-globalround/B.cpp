#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> S(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    int i = 0, j = 0; bool begin = true;
    while(i < n){
        if(S[i] > 0) begin = false;
        if(S[i] == 0 && !begin){
            j = i + 1;
            while(j < n && S[j] == 0){
                j++;
            }
            ans++;
            i = j;
        }
        i++;
    }
    if(!begin) ans++;
    if(S[n-1] == 0) ans = max(0, ans - 1);

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

