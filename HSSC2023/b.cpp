#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;

    if(n==k){
        string a = "", b = "";
        for(int i = 0; i < n; i++){
            i%2?a.push_back(s[i]):b.push_back(s[i]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        string even, odd;
        int sz = min(a.size(), b.size());
        int i = 0;
        while(i < sz){
            even+=a[i];
            even+=b[i];
            odd+=b[i];
            odd+=a[i];
            i++;
        }

        if(i < a.size()){
            even+=a.back();
            odd+=a.back();
        }
        if(i < b.size()){
            even+=b.back();
            odd+=b.back();
        }
        even < odd ? (cout << even << '\n') : (cout << odd << '\n');
    }
    else if(k&1) {
        string a = "", b = "";
        for(int i = 0; i < n; i++){
            i%2?a.push_back(s[i]):b.push_back(s[i]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        string ans = "";
        int sz = min(a.size(), b.size());
        int i = 0;
        while(i < sz){
            ans+=b[i];
            ans+=a[i];
            i++;
        }
        if(i < a.size()){
            ans+=a.back();
        }
        if(i < b.size()){
            ans+=b.back();
        }
        cout << ans << '\n';
    }
    else {
        sort(s.begin(), s.end());
        cout << s << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

