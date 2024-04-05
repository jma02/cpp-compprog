#include <bits/stdc++.h>

using namespace std;

// sum of index * value - max value of index * value

// 1 2 4 3
//
// choosing to fix a max of a perm. means that each other element in a
// perm. has <= value.
//
// From editorial: Why is it optimal to fix this max M, and 
// for each position, pair an index with the largest possible
// remaining value that allows index * value <= M?
//
// Editorial: Proof by contradiction (exercise)
// Assume that it is not optimal to pair an index with
// the largest possible remaining value that allows index * value <= M
//
// Let i be the current index being considered. Let v be a value we pair with
// i, such that v is not the largest possible remaining value that allows
// i * v <= M. 
//
// Let x instead be the largest possible remaining value satisfying 
// i * x <= M.
void solve(){
    int n; cin >> n;
    int ans = -1;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    vector<int> extra;
    extra.assign(n*n, -1);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            extra[i * j - 1] = 1;
        }
    }

    for(int m = 1; m <= n*n; m++){
        if(extra[m - 1] == -1) continue;
        int curr = 0;
        set<int> remaining = {nums.begin(), nums.end()};
        int largest = 0;

        for(int i = n; i >= 1; i--){
            auto it = remaining.rbegin();
            while(*it * i > m && it != remaining.rend()) it++;
            if(it == remaining.rend()){
                ans = 0;
                break;
            }
            curr+=*it*i;
            largest = max(*it*i, largest);
            remaining.erase(*it);
        }
        ans = max(ans, curr - largest);
    }
    cout << ans << '\n';
    
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

