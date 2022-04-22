#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int testcases, i, vectlen, j, helper, last, counter;
    vector<int> vect, outputs;
    std::cin >> testcases;
    i = 0;
    while(i < testcases)
        std::cin >> vectlen; //Grab vector length
        j = 0;
        while (j < vectlen) //Grab vector values
            std::cin >> helper;
            vect.push_back(helper);
            j++;
        std::sort(vect.begin(), vect.end()); //Sort vector
        j = 0;
        last = -1;
        while(j < vectlen) //Iterate through vector
            if(vect[j] == last)
                counter++; //Match? increment counter
            else
                counter = 0; //Else, reset, and set last to curr
                last = vect[j];
            if(counter == 3) //Three occurrances? add to output vector, and EXIT the loop
                outputs.push_back(last);
                j = vectlen + 1;
            j++;
        if(j == vectlen) //This should only be true if no match is found
            outputs.push_back(-1); 
        i++;
        vect.clear(); 
    for(int output : outputs)
        cout << output << "\n";
    return 0;
}


