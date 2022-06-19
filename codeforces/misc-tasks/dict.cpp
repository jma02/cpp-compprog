#include <bits/stdc++.h>
using namespace std;

int main(){
    int T, a,b, idx;
    cin >> T;
    string let;
    vector<int> outputs;
    for(int i = 0; i < T; i++){
        idx = 0;
        cin >> let;
        a = let[0] - 97;
        b = let[1] > let[0] ? 
        let[1] - 97:
        let[1] - 96;

        idx += (25 * (a));
        idx += b;
        outputs.push_back(idx);
    }
    for(int o : outputs) cout << o << "\n";
}