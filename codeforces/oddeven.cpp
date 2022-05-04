#include <iostream>
#include <vector>
typedef long long ll;

using namespace std;

int main(){
    int T, N, j, k, last, parity, possible;
    vector<std::string> outputs;
    std::cin >> T;
    for(int i = 0; i < T; i++){
        std::cin >> N; //grab vec len
        vector<int> vect(N); 
        for(int &value : vect) std::cin >> value;
        vector<int> odds;
        vector<int> evens;
        
        k = 1;
        while(k < N){
            odds.push_back(vect[k]);
            k+=2;
        }
        k = 0;
        while(k < N){
            evens.push_back(vect[k]);
            k+=2;
        }

        parity = odds[0] % 2;
        for(int value : odds){
            if(parity == value % 2){
                possible = 1;
            }
            else{
                outputs.push_back("NO");
                possible = 0;
                break;
            }
        }
        
        if(!possible){continue;}

        parity = evens[0] % 2;
        for(int value : evens){
            if(parity == value % 2){
                possible = 1;
            }
            else{
                outputs.push_back("NO");
                possible = 0;
                break;
            }
        }
        if(possible){outputs.push_back("YES");}
    }
    for(std::string output : outputs) std::cout << output << "\n";
    return 0;
}


        


        

        



