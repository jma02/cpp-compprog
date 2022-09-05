#include <bits/stdc++.h>

using namespace std;

void solve(){
    set<char> vowel = {'A', 'E','I','O','U','a','e','i','o','u','Y','y'};
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(!(vowel.count(s[i]))){
            cout << '.'<<(char)tolower(s[i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

