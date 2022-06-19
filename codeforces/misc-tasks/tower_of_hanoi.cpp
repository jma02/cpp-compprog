#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int start, int end){
    if(n == 1){
        cout << start << " " << end << '\n';
    }
    else{
        int buffer = 6 - (start + end);
        hanoi(n-1, start, buffer);
        cout << start << " " << end << '\n';
        hanoi(n-1, buffer, end);
    }
}
int main(){
    int N; cin >> N;
    cout << pow(2,N)-1 << '\n';
    hanoi(N, 1, 3);
}