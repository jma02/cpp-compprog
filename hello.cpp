#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Hello" << "\nMy name is Carmen Winstead";
    for(int i = 0; i < 10; i++){
        cout <<" AUUUUUUUUUUUUGH" << "\n";
    }
    vector<int> augh(12);
    for(int &a : augh) a = 2;
    for(int a : augh) cout << a << "\n";
    return 0;
    
}
