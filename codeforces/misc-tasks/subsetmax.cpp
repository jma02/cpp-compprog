#include <bits/stdc++.h>

using namespace std;

void solve(){
    int len, max_a = 0, max_b = 0; cin >> len;
    map<int, int> set;
    while(len--){
        int a;
        cin >> a;
        if(set.count(a)) set[a]++; 
        else set[a] = 1;
    }
    int compare = -1;
    for(auto m : set){
        if(m.second == 0) continue;
        else{
            set[m.first]--;
            if(m.first - compare == 1) {
                compare = m.first;
                max_a = m.first+1;
            }
            else{
                break;
            }
        }
    }
    compare = -1;
    for(auto m : set){
        if(m.second == 0) continue;
        else{
            if(m.first - compare == 1){
                max_b = m.first+1;
                compare = m.first;
            }
            else{
                break;
            }
        }
    }
    cout << max_a + max_b << endl;
}
int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }
}
