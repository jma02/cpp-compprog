#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    vector<int> b(m);
    for(auto &i : b) cin >> i;
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
    long long D = 0;
    int l = 0, r = m-1;
    for(int i = 0; i < n/2; i++){
        if(abs(a[i] - b[r]) >= abs(a[i] - b[l])){
            D += abs(a[i] - b[r]);
            r--;
        }
        else{
            D += abs(a[i] - b[l]);
            l++;
        }

        if(abs(a[n-i-1] - b[r]) >= abs(a[n-i-1] - b[l])){
            D += abs(a[n-i-1] - b[r]);
            r--;
        }
        else{
            D += abs(a[n-i-1] - b[l]);
            l++;
        }
    }
    if(n%2) D += max(abs(a[n/2] - b[r]), abs(a[n/2] - b[l]));
    cout << D << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

