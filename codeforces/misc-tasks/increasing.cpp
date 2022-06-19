#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll T, N, count;
    cin >> T;
    vector<int> o;
    while(T--){
        cin >> N;
        vector<ll> inputs(N);
        for(ll &in : inputs) cin >> in;
        count = 0;
        for(int i = N-1; i > 0 ; i--){
            if(inputs[i] < i){
                count = -1; break;
            }
            while(inputs[i-1] >= inputs[i]){
                count++;
                inputs[i-1] /= 2;
            }
            
        }
        o.push_back(count);    
    }
    for(int in : o) cout << in << endl;
}