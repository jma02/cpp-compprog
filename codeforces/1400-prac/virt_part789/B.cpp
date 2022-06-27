#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        string g; cin >> g;
        int odd = 0, even = 0;
        int cnt = 0; char last = g[0];
        for(int i = 0; i < N; i++){
            if(g[i] == last){
                cnt++;
            }
            else{
                if(cnt % 2 == 1){
                    odd++;
                }
                else{
                    even++;
                }
                cnt = 1;
            }
            last = g[i];
        }
        if(cnt % 2 == 1) odd++;
        else even++;
        if(odd > 0) cout << (odd/2) + even << '\n';
        else cout << 0 << '\n';
    }
}
