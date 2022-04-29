#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    ll T, N;
    cin >> T;
    for(ll i =  0; i < T; i++){
    cin >> N;
    vector<string> vect(N);
    vector<ll> vect2(N);
    for(string &str : vect) cin >> str;

    for(string str: vect){
        vect2.push_back(str[1] +str[2]);
    }
    
    for(ll str : vect2) cout << str << " <<< \n";
    }
}
