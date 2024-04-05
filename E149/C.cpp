#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();
    string ans = "";
    // edge case
    string edge = "";
    for(int i = 0; i < n; i++){
        edge+='?';
    }
    if(s==edge){
        for(int i = 0; i < n; i++){
            ans+='0';
        }
        cout << ans << '\n';
        return;
    }

    int i = 0, j = 0;
    // advance i to next ?
    // while s[i] == ?, keep advancing
    // once a bit is reached, add s[i] to ans
    // for as many ? we encounter
    while(i<n){
        if(s[i]!='?'){
            ans+=s[i];
            i++;
            j++;
        }
        else{
            while(s[i]=='?') i++;
            if(i<n){
                for( ; j < i; j++){
                   ans+=s[i];
                }
            }
        }
    }
    if(s[i-1] == '?'){
        char buffer = s[j-1];
        for( ; j < i; j++){
            ans+=buffer; 
        }
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

