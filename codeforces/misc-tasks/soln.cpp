#include <iostream>
#include <vector>
using namespace std;

int main(){
    int testcases;
    int rating;
    vector<int> ratings;
    std::cin >> testcases; 
    int i = 0;
    while (i < testcases){
        std::cin >> rating;
        ratings.push_back(rating);
        i++;
    }
    for(int r : ratings){
        if(r <= 1399)
            std::cout << "Division 4\n";
        else if(r <= 1599)
            std::cout << "Division 3\n";
        else if(r <= 1899)
            std::cout << "Division 2\n";
        else
            std::cout << "Division 1\n";
        i++;
    }

    return 0;
}
