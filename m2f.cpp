#include <iostream>
using namespace std;

int main(){
    double meterconv = 3.28084;
    double meter;
    cout << "Enter a meter value to be converted into feet: ";
    cin >> meter;

    cout << meter << " meters equals "<< meter * meterconv;
    return 0;
}
