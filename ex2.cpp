#include <bits/stdc++.h>

using namespace std;


int main(){
    for(int n = 1; n < 20; n++){
        int sum = 0;
        for(int i = 1; i < n; i++){
            for(int j = 1; j < i*i; j++){
                if(j%i == 0){
                    for(int k = 0; k < j; k++){
                        sum++;
                    }
                }

            }
        }
        cout << sum << '\n';
    }
}

