#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n; cin >> n;
    vector<long long> arr(n);
    map<long long, long long> cnt;
    for(int i = 0; i < n; i++){
        long long x; cin >> x;
        cnt[x]++;
        arr[i]=x;
    }
    // edge case
    if(cnt.size() == 1){
        cout << "-1 \n";
        return;
    }
    bool ok = false;
    int i = 0;
    while(i < n && !ok){
        int j = 0;
        bool divisible = false;
        while(j < n){
            if(arr[i] == arr[j]){
                j++;
                continue;
            };

            if(arr[j] % arr[i] == 0)divisible=true;
            j++;
        }
        if(!divisible)ok=true;
        else i++;
    }
    if(ok){
        cout << n-cnt[arr[i]] << " " << cnt[arr[i]] << '\n';
        for(int j = 0; j < n; j++){
            if(arr[i]!=arr[j])cout << arr[j] << " ";
        }
        cout << '\n';
        for(int j = 0; j < cnt[arr[i]]; j++){
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    else{
        cout << "-1 \n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

