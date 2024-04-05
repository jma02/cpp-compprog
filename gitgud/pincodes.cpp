#include <bits/stdc++.h>

using namespace std;

void solve(){
    set<string> s;
    vector<pair<string, bool>> v;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        if(s.count(x)) v.push_back({x, false});
        else v.push_back({x, true});
        s.insert(x);
    }
    int i = 0;
    int init_size = s.size();
    while(s.size() < n){
        if(v[i].second){
            i++;
            continue;
        }
        int j = 0;
        int k = 1;
        string x = v[i].first;
        string init_string = v[i].first;
        while(s.count(x)){
            if(k>9){
                j++;
                k=0;
                x = init_string;
            }
            x[j] = ((int)x[j]+k)%10+48;
            k++;
        }
        s.insert(x);
        v[i] = {x, false};
        i++;
    }
    cout << n - init_size << '\n';
    for(int i = 0; i < n; i++){
        cout << v[i].first << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

