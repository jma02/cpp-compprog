#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

int main(){
    int T, x,y,a,b,c;
    vector<int> outputs;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> x; cin >> y;
        if(x > y){outputs.push_back(0);
                  outputs.push_back(0);}
        else if(x == y){
            outputs.push_back(1);
            outputs.push_back(1);
        }
        else{
            if(y % x != 0){
                outputs.push_back(0);
                outputs.push_back(0);
            }
            else{
                a = gcd(x,y);
                b = x / a;
                a = y / a;
                outputs.push_back(b);
                outputs.push_back(a);   
            }
        }
    }
    c = 0;
    for(int o : outputs){
        c++;
        cout << o << " ";
        if(c == 2){
            cout << "\n";
            c = 0;
        }
    }
}