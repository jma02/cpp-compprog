#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int T, N, j, k, last, parity;
    vector<std::string> outputs;
    std::cin >> T;
    for(int i = 0; i < T; i++){
        std::cin >> N; //grab vec len
        vector<int> vect(N); 
        for(int &value : vect) std::cin >> value;
        j = 0; 
        if(N % 2 == 1){k = N - 1;} //if vec len is odd, subtract one 
        last = vect[0];
        while(j < k){        //processing even indices
            if(last % 2 != vect[j] %2){
                parity = 0;
                j = k;
            }
            else{
                j += 2;
            }
        }
        if(j == k+2){parity = 1}
        if(!parity){
            outputs.push_back("NO");
            continue;}
        
        j = 1;
        if(N % 2 == 1){k = N}
        else{k = N - 1}


