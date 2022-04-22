#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int testcases, vectlen, j, helper, last, counter;
    vector<int> outputs;
    std::cin >> testcases;
    for(int i=0; i < testcases; ++i){
        std::cin >> vectlen; //Grab vector length
        j = 0;
        vector<int> vect(vectlen);
        for(int &value : vect) std::cin >> value;

        std::sort(vect.begin(), vect.end()); //Sort vector
        j = 0;
        last = -1;
        while(j < vectlen){ //Iterate through vector
            if(vect[j] == last){
                counter++;
            }               //Match? increment counter
            else{
                counter = 1; //Else, reset, and set last to curr
                last = vect[j];
            }
            if(counter == 3){ //Three occurrances? add to output vector, and EXIT the loop
                outputs.push_back(last);
                j = vectlen + 1;
            }
            j++;
        }
        if(j == vectlen){ //This should only be true if no match is found
            outputs.push_back(-1);
        }
    }
    for(int output : outputs){
        cout << output << "\n";
    }
    return 0;
}

