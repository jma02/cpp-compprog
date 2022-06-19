#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll factorial(ll n){
    if(n==0){return 1;}
    else{return n * factorial(n-1);}
}
int main(){
    int T;
    cin >> T;
    string a, b;
    vector<int> outputs;
    for(int i = 0; i < T; i++){
        cin >> a; cin >> b;
        if(b.length() > 1 && 
       !(b.find("a"))){outputs.push_back(-1);}
       else{
           if(b.length() == 1 && b[0] == 'a'){
               outputs.push_back(1);
           }
           else{
               outputs.push_back(factorial(a.length()) + 1);
           }
       }
    }
    for(int o : outputs) cout << o << '\n';
}