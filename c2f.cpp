#include <iostream>
using namespace std;

int main(){
    double celsius;
    cout << "Enter a celsius value to be converted to a fahrenheit value: ";
    cin >> celsius;

    cout << celsius << " degrees celsius is " << (celsius * 1.8) + 32 << "\n";
    return 0;
}
