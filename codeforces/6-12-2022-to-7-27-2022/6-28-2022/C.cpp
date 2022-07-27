#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    set<ll> seen;
    for(ll &i : arr){
        cin >> i;
        seen.insert(i);
    }
    sort(arr.begin(), arr.end());

    ll i = 0, j = 1, k = 2;
    if(seen.size() == 1 && *seen.begin() == 0){
        cout << "YES" << '\n';
        return;
    }
    do{
        ll sum = arr[i] + arr[j] + arr[k];
        if(!seen.count(sum)){
            cout << "NO" << '\n';
            return;
        }
        else{
            ll id = arr[i+1] - arr[i];
            ll jd = j < n - 3 ? arr[j+1] - arr[j] : 1000000000;
            ll kd = k < n-1 ? arr[k+1] - arr[k] : 10000000000;
            if((k != n-1 && kd == min(id, min(jd, kd))) || (k - j == 1 && j - i == 1)) k++;
            else if((j != n - 2 && jd == min(jd, min(kd, id)) && k - j > 1) || (j - i == 1)) j++;
            else if(i != n - 3 && id == min(kd, min(jd, id)) && j - i > 1) i++;
        }
    }while(i != n - 3);
    cout << "YES" << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
    
}

