#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    ll T;
    cin >> T;
    while(T--){
        int n, a, b, c;
        cin >> n;

        if(n % 2 == 0){
            c = 1;
            b = 2;
            a = n - 3;
            cout << a << " " << b << " " << c << endl;
        }
        else{
            int m = n-1;
            if(m/2 % 2 == 0){
                c = 1;
                b = m/2 - 1;
                a = m/2 + 1;
            }
            else{
                c = 1;
                b = m/2 - 2;
                a = m/2 + 2;
            }
            cout << a << " " << b << " " << c << endl;
        }            
    }
}