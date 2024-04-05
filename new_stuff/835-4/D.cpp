#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)cin >> arr[i];

    int l = -1;
    long long low = LLONG_MAX;
    bool found = false;
    long long peak = -1;
    bool ok = true;
    for(int i = 0; i < n; i ++){
        if(!found){
            if(arr[i] <= low){
                l = i;
                low = min(arr[i], low);
            }
            else{
                found = true;
                peak = max(peak, arr[i]);
            }

        }
        else{
            peak = max(peak, arr[i]);
            if(peak > arr[i]) ok = false;
        }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

