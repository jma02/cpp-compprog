#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main(){
    for(int n = 0; n < 27; n++){

    ll sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i*i; j++){
            for(int k = 0; k < j; k++){
                sum++;
            }
        }
    }
    
    cout << sum << '\n';
    }
}
