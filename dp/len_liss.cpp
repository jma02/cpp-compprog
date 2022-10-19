#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];
    int dp[n];
    std::fill(dp, dp+n, 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    cout << *std::max_element(dp, dp+n) << '\n';
}

