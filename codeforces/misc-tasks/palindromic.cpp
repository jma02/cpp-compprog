#include <bits/stdc++.h>
using namespace std;
#define pb push_back

void solve(){
    int N; cin >> N;
    string str; cin >> str;

    if(N%2 == 1){
       int i = 0;
        while(str[N/2-i] == str[N/2+i+1] && str[N/2-i] == str[N/2+1]){
            i++;
        }
        cout << i*2+1 << endl;

    }
    else{
        int i = 0;
        while(str[N/2-i] == str[N/2+i] && str[N/2-i] == str[N/2]){
            i++;
        }
        cout << i*2 << endl;
    }        

}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}