#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> seq;
    seq.push_back(9);
    int sum = 9;
    int curr = 9;
    if(n < 10){
        cout << n << '\n';
        return;
    }
    while(sum != n){
        curr--;
        int c = n - sum;
        if(c <= curr){
            seq.push_back(c);
            sum+=c;
        }
        else{
            seq.push_back(curr);
            sum+=curr;
        }
    }
    sort(seq.begin(), seq.end());
    for(int i : seq)cout<<i;
    cout <<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

