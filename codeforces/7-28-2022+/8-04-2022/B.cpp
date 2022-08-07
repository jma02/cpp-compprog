#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
    int arr[n];
    iota(arr,arr+n,1);
    cout << n << '\n';
    for(int i = 0; i < n-1; i++){
        for(auto i : arr) cout << i << " ";
        cout << '\n';
        swap(arr[i], arr[i+1]);
    }
    for(auto i : arr) cout << i << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

