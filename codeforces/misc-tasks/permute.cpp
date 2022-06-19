#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()
vector<string> perms;
string input;
int char_count[26];
void search(string p){
    if(p.size() == input.size()){
        perms.pb(p);
        return;
    }
    else{
        for(int i = 0; i < 26; i++){
            if(char_count[i] > 0){
                char_count[i]--;
                search(p+(char)('a'+i));
                char_count[i]++;
            }
        }
    }
}

int main(){
    cin >> input;
    for(char c: input) char_count[c - 'a']++;
    search("");
    cout << perms.size() << '\n';
    // sort(all(perms));
    for(string i : perms){
        cout << i << '\n';
    }
}