#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; 
    string ticket;
    cin >> T;
    for(auto i = 0 ; i < T ; i++){
        cin >> ticket;
        if
        ((int)ticket[0]+(int)ticket[1]+(int)ticket[2] ==
        (int)ticket[3]+(int)ticket[4]+(int)ticket[5]){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }  
    }
}