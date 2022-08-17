#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    ll n, k; cin >> n >> k;
    vector<ll> mult;
    vector<ll> ak;
    vector<ll> u;
    int i = 1;
    while(i <= n){
        if(i%4==0)mult.push_back(i);
        else if((i+k)%4==0)ak.push_back(i);
        else u.push_back(i);
        i++;
    }
    if((ll)mult.size()+(ll)ak.size()>= n/2){
        cout << "YES" << '\n';
        int j = 0;
        int i = 0;
        while(j < u.size() && i <mult.size()){
            cout << u[j] << " " <<mult[i] << '\n';
            j++;
            i++;
        }
        int k = 0;
        while(j < u.size() && k < ak.size()){
            cout << ak[k] << " " << u[j] << '\n';
            j++;
            k++;
        }
   }
    else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

