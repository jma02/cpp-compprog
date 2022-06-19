#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()

void solve(){
    int n, m, k; cin >> n >> m >> k;
    string output;
    string a; string b; cin >> a >> b;
    sort(all(a)); sort(all(b));

    auto ap = a.begin(), bp = b.begin();
    int operations = 0;
    bool ao, bo;
    while(n > 0 && m > 0){
        if(*ap < *bp && operations < k){
            output.push_back(*ap);
            ap++;
            n--;
            if(ao) operations++;
            else operations = 1;
            ao = true; bo = false;
        }
        else if(*ap > *bp && operations < k){
            output.push_back(*bp);
            bp++;
            m--;
            if(bo) operations++;
            else operations = 1;
            ao = false; bo = true;
        }
        else{
            if(ao){
                output.push_back(*bp);
                bp++;
                m--; 
                ao = false; bo = true;
                operations = 1;
            }
            else{
               output.push_back(*ap);
                ap++;
                n--;
                ao = true; bo = false;
                operations = 1; 
            }
        }
    }
    cout << output << '\n';
}

int main(){
    int T; cin >> T;
    while(T--){
        solve();
    }

}