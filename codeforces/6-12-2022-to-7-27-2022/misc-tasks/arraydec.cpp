#include <bits/stdc++.h>
using namespace std;
#define pb push_back

void solve(){
    int N; cin >> N;
    vector<int> a(N), b(N);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    int maxdiff = 0;
    for(int i = 0; i < N; i++){
        int d = a[i] - b[i];
        maxdiff = max(maxdiff, d);
    }
    bool yes = true;
    for(int i = 0; i < N; i++){
        if(a[i] - maxdiff < b[i] && b[i] > 0) yes = false;
    }
    
    yes ? cout << "YES" : cout << "NO";
    cout << '\n';

}

int main(){
    int T; cin >> T;
    while(T--){
        solve(); 
    }
}
