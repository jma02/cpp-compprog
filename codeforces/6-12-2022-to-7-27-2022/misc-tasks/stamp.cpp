#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, red, blue, white;
    vector<std::string> outputs;
    std::cin >> T;
    for(int i = 0; i < T; i++){
        std::cin >> N;
        vector<char> vect(N);
        for(char &c : vect) std::cin >> c;
        red = 0;
        blue = 0;
        for(char c : vect){
            if(c == 'B'){blue++;}
            else if(c == 'R'){red++;}
            else if(c == 'W'){
                white++;
                if(blue > 0 && red > 0){
                    blue = 0;
                    red = 0;
                }
                else if(blue == 0 && red == 0){
                    continue;
                }
                else{
                    outputs.push_back("NO");
                    N = -1;
                    break;
                }
            }
        }
        if(N > 0 && (blue > 0 ^ red > 0)){outputs.push_back("NO");}
        else if(N > 0){ outputs.push_back("YES");}
    }
    for(std::string str: outputs) std::cout << str << "\n";
    return 0;
}

