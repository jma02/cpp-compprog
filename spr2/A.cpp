#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    bool good = true;
    for(auto it : mp){
        if(it.second > 1)good=false;
    }
    good ? (cout << 1 << '\n') : (cout << 0 << '\n'); 
}

