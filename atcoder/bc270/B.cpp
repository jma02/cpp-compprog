#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int x, y, z; cin >> x >> y >> z;
    bool ok=0;
    if((x>y)&&x<0)ok=1;
    if((x<y)&&x>0)ok=1;
    if(x>0 && y<0)ok=1;
    if(ok){
        cout<<abs(x)<<'\n';
        return 0;
    }
    ok=1;
    if((y>0) && (z>y))ok=0;
    if((y<0) && (z<y))ok=0;
    if(!ok){
        cout<<-1<<'\n';
        return 0;
    }
    int ans;
    if(((z>0) && (y<0)) || ((z<0) && (y>0))){
        ans = 2*(abs(z))+abs(x);
    }
    else{
        ans = abs(x);
    }
    cout<< ans << '\n';
}


