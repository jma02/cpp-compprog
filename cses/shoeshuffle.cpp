#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;
    map<int,int> freq;
    for(int i = 0; i < N; i++){
        int size; cin >> size;
        if(freq.count(size)) freq[size]++;
        else freq[size] = 1;
    }
    bool valid = true;
    for(auto i : freq){
        if(i.second == 1){
            valid = false;
        }
    }
    if(!valid) cout << -1 << '\n';
    else{
        int pos = 1;
        for(auto i : freq){
            for(int j = 1; j < i.second; ++j){
                cout << pos + j << " ";
            }
            cout << pos << " ";
            pos += i.second;
        }
        cout << '\n';   
    }
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}