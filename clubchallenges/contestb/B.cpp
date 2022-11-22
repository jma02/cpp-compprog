#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >>n;
    string s; cin >> s;
    map<char,int> m;
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }
    for(int i = 0; i < m['n']; i++){
        cout << "1 ";
    }
    for(int i = 0; i < m['z']; i++){
        cout << "0 ";
    }
    cout << '\n';
}

