#include <bits/stdc++.h>

using namespace std;

// Binary Search

// is the previous index able to get to m-1 ?
//
// 1
// 2 17
// 3 5

void solve(){
    long long n, k; cin >> n >> k;
    vector<long long> arr(n, 0);
    for(auto &i : arr) cin >> i;
    std::reverse(arr.begin(), arr.end());

    long long INF = 2e8;
    long long l = 0, r = INF;

    while(l < r) {
        long long m = (l+r+1) / 2;
        vector<long long> operations(n, 0);
        operations[0] = arr[0] < m ? INF : 0;

        bool ok = operations[0] <= k ? 1 : 0;

//        cout << "VALUE: " << m << '\n';

        for(int i = 1; i < n; i++){
            vector<long long> recurse(i);
            recurse[0] = arr[0] < m-i ? INF : 0;

            for(int j = 1; j < i; j++){
                recurse[j] = arr[j] >= (m - i + j) ? 0 :
                    (m - i + j) - arr[j] + recurse[j-1];
            }

            
            operations[i] = arr[i] >= m ? 0 : m - arr[i] + recurse[i-1];
            if(operations[i]<=k)ok=1;

            /*
            cout << "DBG:\n";
            cout << "It would take " << operations[i] << " operations to transform "<< arr[i] << " into " << m << '\n';
            cout << '\n';
            */
        }
        if(ok) l = m;
        else r = m-1;
    }
    cout << l << '\n';
}

int main(){
//    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

