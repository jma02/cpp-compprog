#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    int x, y; cin >> y >> x;
    int d; cin >> d;
    bool top = true; bool bottom = true;

    for(int i = 1; i <= n; i++){ 
        if((abs(x-1)+abs(y-i))<=d)top = false;

        if((abs(x-m)+abs(y-i))<=d)bottom = false;
   }
    for(int i = 1; i <= m; i++){
        if((abs(x-i)+abs(y-1))<=d)bottom = false;

        if((abs(x-i)+abs(y-n))<=d)top = false; 
    }
    if(top || bottom)cout<<n+m-2<<'\n';
    else cout<<-1<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

