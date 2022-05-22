#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;
    map<int, int> arr;
    while(N--){
        int a; cin >> a;
        if(arr.count(a)) arr[a]++;
        else arr[a] = 1;
    } 
    int i = 5; int product = 1;
    for(auto iter = arr.rbegin(); iter != arr.rend(); iter++){
        while(iter->second > 0){
            arr[iter->second]--;
            product*= iter->first;
        }
    }
    cout << product << endl;  
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}