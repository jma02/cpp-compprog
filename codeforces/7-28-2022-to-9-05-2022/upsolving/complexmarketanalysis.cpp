#include <bits/stdc++.h>

using namespace std;

const int N = 2*10e5;

vector<bool> prime(N, true);

void sieve(int n){
    prime[1]=false;
    for(int i = 2; i*i < n; i++){
        if(prime[i]){
            for(int j = i*i; j < n; j+=i){
                prime[j]=false;
            }
        }
    }
}

void solve(){
    int n, e; cin >> n >> e;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;
    long long ans = 0;
    for(int i = 0; i < n; i++){
        long long l = 0, r = 0;
        if(prime[arr[i]]){
            for(int j = i-e; j >= 0; j-=e){
                if(arr[j]!=1)break;
                l++;
            }
            for(int j = i+e; j < n; j+=e){
                if(arr[j]!=1)break;
                r++;
            }
        }
        ans+=l*(r+1)+r;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    sieve(N);
    int t; cin >> t;
    while(t--) solve();
}

