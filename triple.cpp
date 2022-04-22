#include <iostream>
#include <vector>

using namespace std;

int main(){
    int testcases, i, vectlen, j, helper, last, counter;
    vector<int> vect, outputs;
    std::cin >> testcases;
    std::string line;
    i = 0;
    while(i < testcases)
        std::cin >> vectlen;
        j = 0;
        while (j < vectlen)
            std::cin >> helper;
            vect.push_back(helper);
            j++;
        sort(vect.begin(), vect.end());
        j = 0;
        last = -1;
        while(j < vectlen)
            if(vect[j] == last)
                counter++;
            else
                counter = 0;
                last = vect[j];
            if(counter == 3)
                outputs.push_back(last);
                j = vectlen + 1;
            j++;
        if(j == vectlen)
            outputs.push_back(-1);
        i++;
        vect.clear();
    for(int output : outputs)
        cout << output << "\n";
    return 0;
}


