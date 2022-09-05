#include <bits/stdc++.h>

using namespace std;

int primes[] = {2,3,5,7,11,13,17,19,23,29,31};
void solve(){
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a)cin>>i;

    map<int,int> color;
    map<int,int> pos;
    set<int> used;
    int unique = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 11; j++){
            if(a[i]%primes[j] == 0){
                if(used.count(j)) color[i] = pos[j];
                else{
                    unique++;
                    pos[j] = unique;
                    color[i] = pos[j];
                }
                used.insert(j);
                break;
            }
        }
    }
    cout << used.size() << '\n';
    for(auto [k,v] : color) cout << v << " ";
    cout << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

