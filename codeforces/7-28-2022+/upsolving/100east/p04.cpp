#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    int i = 0, cnt = 0;
    int curr = -1;
    while(i < s.size() && cnt < 7){
        if(s[i]-'0'==curr)cnt++;
        else cnt = 1;
        curr=s[i]-'0';
        i++;
    }
    if(cnt >= 7)cout <<"YES\n";
    else cout <<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

