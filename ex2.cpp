#include <bits/stdc++.h>

using namespace std;


int main(){
    int e = 0, o = 0;
    for(int i = 1; i <= 40; i++){
        if(i%2==0)e++;
        else o++;
    }
    cout << e << " " << o << '\n';
}

