#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    string s, t; cin >> s >> t;
    if(s.size()>t.size()){
        cout << "No\n";
        return 0;
    }
    else{
        bool ok = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i]!=t[i])ok=false;
        }
        if(ok)cout <<"Yes\n";
        else cout << "No\n";
    }
}

