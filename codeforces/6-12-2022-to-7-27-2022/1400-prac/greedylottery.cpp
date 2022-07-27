#include <bits/stdc++.h>

using namespace std;

int bills[5] = {1,5,10,20,100};
void solve(){
    int sum; cin >> sum;
    int ans = 0, curr = 0;
    int j = 4;
    while(curr < sum){
        if(curr + bills[j] <= sum){
            curr += bills[j];
            ans++;
        }
        else j--;
    }
    cout << ans << '\n';


}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

