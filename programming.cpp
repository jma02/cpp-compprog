#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
   
    int num;
    std::string line;

    std::getline(std::cin, line);
    std::istringstream stream(line);

    while(stream >> num)
        vect.push_back(num);


   sort(vect.begin(), vect.end());
    for(int i :vect){
        cout << i;
        cout << "\n";
    }
    return 0;

}
