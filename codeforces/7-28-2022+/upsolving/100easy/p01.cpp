#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int &i : arr)cin>>i;
    for(int i = n-1; i>=0; i--)cout<< arr[i] << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();

}

