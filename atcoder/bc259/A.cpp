#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, x, t, d;
    cin >> n >> m >> x >> t >> d;
    if(m >= x){
        cout << t << '\n';
    }
    else{
        int birth_cm = t - (x*d);
        cout << birth_cm + m*d << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

