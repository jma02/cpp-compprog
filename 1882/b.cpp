#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<set<int>> inputs(n);

    for(int i = 0; i < n; i++){
        int k_i; cin >> k_i;

        for(int j = 0; j < k_i; j++){
            int x; cin >> x;
            inputs[i].insert(x);
        }
    }
    // input end

    // look at my indices
    vector<set<int>> indices(51);
    for(int i = 0; i < n; i++){
        // if i see an element in an input, i add one contribution to the index for that element
        for(auto j : inputs[i]){
            indices[j].insert(i);
        }
    }


    vector<set<int>> cand;
    for(int i = 0; i < 51; i++){
        if(indices[i].size()>0)cand.push_back(indices[i]);
    }

    sort(cand.begin(), cand.end(), [](const set<int>& a, 
                const set<int>& b){
            return a.size() < b.size();
    });
//    int min_sz = cand[0].size();

    /*
    for(int i = cand.size()-1; i >= 0; i--){
        if(cand[i].size()>min_sz)cand.pop_back();
    }
    */

    /*
    for(auto i : cand){
        cout << "new\n";
        for(auto j : i)cout << j << " ";
        cout << '\n';
    }
    */

    int ans = -1;
    
    // im looking to remove one particular index
    // through brute force.
    for(auto i : cand){
        set<int> setminus;
        for(int j = 0 ; j < n; j++){
            if(i.count(j))continue;
            for(auto k : inputs[j])setminus.insert(k);
        }
        ans=max(ans, int(setminus.size()));
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

