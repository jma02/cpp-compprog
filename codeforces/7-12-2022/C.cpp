#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> cy;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cy.push_back(x);
    }
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        string m; cin >> m;
        int sh = 0;
        for(int j = 0; j < x; j++){
            if(m[j] == 'U') sh--;
            else sh++;
        }
        if(cy[i] + sh < 0){
            cy[i] = (cy[i] + sh) % 10+10;
            cy[i] %=10;
        }
        else cy[i] = (cy[i] + sh) % 10;
    }
    for(int i : cy){
        cout << i << ' ';
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    
}

