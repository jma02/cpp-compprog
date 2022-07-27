#include <bits/stdc++.h>

using namespace std;

void solve(){
    string a; cin >> a;
    int p; cin >> p;
    int total = 0;
    map<int, vector<int>> cost;
    for(int i = 0; i < a.size(); i++){
        cost[a[i]-96].push_back(i);
        total += a[i] - 96;
    }
    set<int> idx;
    while(total > p){
        int targ = total - p;
        if(cost.count(targ)){
            idx.insert(cost[targ][0]);
            total -= targ;
        }
        else{
            auto iter = cost.rbegin();
            total -= iter->first;
            idx.insert(cost[iter->first].back());
            cost[iter->first].pop_back();
            if(cost[iter->first].size()==0) cost.erase(iter->first);
        }
    }
    for(int i = 0; i<a.size();i++){
        if(!idx.count(i)) cout << a[i];
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}

