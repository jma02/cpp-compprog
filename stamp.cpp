#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T, N, space, wfound, spacebefore;
    vector<std::string> outputs;
    std::cin >> T;
    for(int i = 0; i < T; i++){
        std::cin >> N;
        vector<char> vect(N);
        for(char &c : vect) std::cin >> c;
        space = 0;
        wfound = 0;
        spacebefore = 0;
        for(char c : vect){
            if(c != 'W' && !wfound){
                spacebefore++;
            }
            else if(c == 'W' && !wfound){
                wfound = 1;
                if(spacebefore == 1){
                    outputs.push_back("NO");
                    N = -1;
                    break;
                }
            }
            else if(wfound && c != 'W'){
                space++;
            }
            else if(wfound && c == 'W'){
                if(space % 2 != 0){
                    outputs.push_back("NO");
                    N = -1;
                    break;
                }
                else{
                    space = 0;
                }
            }
        }
        if(N > -1 && N > 2){outputs.push_back("YES");}
        else if (N > -1 && N <= 2){
            if(vect[0] == 'W' && vect[1] == 'W'){
                outputs.push_back("YES");
            }
            else{
                outputs.push_back("NO");
            }
        }
    }
    for(std::string output : outputs) std::cout << output << "\n";
    return 0;
}
