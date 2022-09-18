#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    char ans[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> ans[i][j];
        }
    }
    int a, b, c, d;
    int i=0, j=0;
    bool ok = false;
    while(!ok){
        while(i<10 &&!ok){
            while(j<10&&!ok){
                if(ans[i][j]=='#'){
                    ok=true;
                    a=i+1;
                    c=j+1;
                }
                j++;
            }
            j = 0;
            i++;
        }
    }
    ok = false;
    i = 9; j = 9;
    while(!ok){
        while(i>=0 &&!ok){
            while(j>=0&&!ok){
                if(ans[i][j]=='#'){
                    ok=true;
                    b=i+1;
                    d=j+1;
                }
                j--;
            }
            j = 9;
            i--;
        }
    }
    cout << a << " " << b << '\n';
    cout << c << " " << d << '\n';
}

