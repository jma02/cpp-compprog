#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, N, count, first;
    cin >> T;
    for(auto i = 0; i < T; i++){
        cin >> N;
        count = 0;
        vector<int> candy(N);
        for(int &i : candy) cin >> i;
        sort(candy.begin(), candy.end());
        first = candy[0];
        for(int i : candy){
            count += i - first;
        }
        cout << count << endl;
    }
}