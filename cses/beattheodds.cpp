#include <bits/stdc++.h>
#define pb push_back
using namespace std;
void solve(){
    int N; cin >> N;
    int odd = 0, even = 0;
    for(int i = 0; i < N; i++){
        int temp; cin >> temp;
        if(temp % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << min(even,odd) << '\n';
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}