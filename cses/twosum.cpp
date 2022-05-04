#include <bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
#include <bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
int main(){
    ll N, T, pos1 = 0, pos2 = 0;
    cin >> N;
    cin >> T;
 
    vector<ll> arr(N);
    map<ll,ll> pos;
    map<ll,ll> duplicates;
    int i = 0;
    for(ll &val : arr){
        cin >> val;
        if(pos.count(val)){
            duplicates[arr[i]] = i+1;
        }
        else{pos.insert({arr[i], i+1});}
        i++;
    }
    for(ll val : arr){
        if(pos.count(T-val)){
            if(val == T-val && duplicates.count(T-val)){
                pos1 = pos[val];
                pos2 = duplicates[val];
            }
            else if(val != T-val){
            pos1 = pos[val];
            pos2 = pos[T-val];
            }
        }
    }
 
 
    if(!pos1 && !pos2){cout << "IMPOSSIBLE";}
    else{cout << pos1 << " " << pos2;}
}