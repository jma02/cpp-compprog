#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    int n; cin>>n;
    int arr[n+1];
    int curr = n;
    int i = n-1;
    while(curr > 0){
        if(curr == 1){
            curr-=1;
            arr[i]=1;
        }
        else{
            arr[i] = curr-1;
            arr[i-1] = curr;
            i-=2;
            curr-=2;
        }
    }
    for(int i = 0; i < n; i++)cout<< arr[i] << " ";
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

