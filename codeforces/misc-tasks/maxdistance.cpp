#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    vector<int> x(T);
    vector<int> y(T);
    for(int &i : x) cin >> i;
    for(int &i : y) cin >> i;
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    cout << (int)(pow((x[T-1]-x[0]),2) + pow((y[T-1]-y[1]),2));
}