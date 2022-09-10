#include <bits/stdc++.h>
#include <queue>

using namespace std;


void solve(){
    int n; cin >> n;
    if(n%2==0){
        for(int i = n-2; i >=1; i--){
        cout << i << " ";
        }

    }
    else{ 
        bool swap = false;
        for(int i = n-2; i>=2; i-=2){
            if(swap) cout << i <<" "<<i-1 << " ";
            else cout << i-1 << " " << i << " ";
            swap = !swap;
        }
        cout << 1 << " ";
    }
    cout << n-1 << " " << n << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

