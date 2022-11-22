#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    long long n, s; cin >> n >> s;
    vector<long long> a(n);

    for(long long &i : a) cin >> i;

    long long l = 0, r = n+1;
    vector<long long> c(n+1);
    c[0] = 0;
    while(l < r-1){
        long long k = (l+r)/2;
        for(int i = 1; i <= n; i++){
            c[i] = a[i-1] + i*k + c[i-1];
        }
        long long most = std::upper_bound(c.begin(), c.end(), s)-c.begin();
        if(most >= k){
            l = k;
        }
        else{
            r = k;
        }
    }
    for(int i = 1; i <= n; i++){
        c[i] = a[i-1] + i*l + c[i-1];
    }
    cout << l << " " << c[l];

}

