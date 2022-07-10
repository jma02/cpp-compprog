#include <bits/stdc++.h>

using namespace std;

vector<int> pref_func(string s){
    int n = s.length();
    vector<int> pi(n);
    for(int i = 1; i < n; i++){
        int l = pi[i-1];
        while(l > 0 && s[i] != s[l]){
            l = pi[l-1];
        }
        if(s[i] == s[l]) l++;
        pi[i] = l;
    }
    return pi;
}

void solve(int i){
    string spell; cin >> spell;
    vector<int> pi = pref_func(spell);
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    for(int i = 1; i <= T; i++){
        solve(i);
    }
}


