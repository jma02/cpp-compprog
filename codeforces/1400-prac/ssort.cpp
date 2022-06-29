#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n - 1; i++){
        int m = arr[i];
        int s = i;
        for(int j = i; j < n; j++){
           if(arr[j] < m){
               m = arr[j];
               s = j;
           }
        }
        swap(arr[i], arr[s]);
    }
    for(int i : arr) cout << i << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

