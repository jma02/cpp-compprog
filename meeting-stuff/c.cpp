#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<long long> arr(n);
    for(auto &i : arr) cin >> i;

    vector<pair<int,int>> blocks;
    int i = 0;
    while(i < n){
        while(arr[i]!=0 && i < n)i++;
        int j = i+1;
        if(i < n){
            while(arr[j]!=0 && j < n)j++;
        }
        if(i<n)blocks.push_back({i,j-1});
        i=j;
    }
    reverse(blocks.begin(), blocks.end());

    i = 0;

    long long sum = 0;
    while(i < n-1){
        if(blocks.size() <= 0) break;
        while(i < blocks.back().first){
            sum+=arr[i];
            i++;
        }
        auto [l, r] = blocks.back();
        blocks.pop_back();

        map<int,long long> prefs;
        long long blocksum = sum;
        for(int j = l; j <= r; j++){
            blocksum+=arr[j];
            prefs[blocksum]++;
        }

        auto mx_iter = std::max_element(prefs.begin(), prefs.end(), 
            [](const pair<int,int>& a, const pair<int,int>& b){
                return a.second < b.second;
            }
        );

        arr[i]= -(*mx_iter).first;
        for(int j = l; j < r; j++){
            sum+=arr[j];
        }
        i=r;
    }
    map<int, long long> ans;

    sum = 0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
        ans[sum]++;
    }

    cout << ans[0] << '\n';
 //   for(auto i : arr) cout << i << " ";
//  cout <<'\n';
}

int main(){
//   ios_base::sync_with_stdio(false);  
//   cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

