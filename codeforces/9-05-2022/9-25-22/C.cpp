#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
    string s; cin >> s;
    vector<ll> a(s.size());
    map<ll,ll> occ;
    for(int i = 0; i < s.size(); i++){
        a[i]=s[i]-'0';
        occ[a[i]]++;
    }
    vector<ll> liss;
    liss.push_back(-1);
    for(int i = 0; i < a.size(); i++){
        if(a[i]>=liss.back())liss.push_back(a[i]);
        else{
            while(liss.back()>a[i])liss.pop_back();
            liss.push_back(a[i]);
        }
    }
    for(auto i : liss)occ[i]--;

    for(auto [key,val] : occ){
        for(int i = 0; i < val; i++)liss.push_back(min(key+1, 9LL));
    }

    sort(liss.begin(), liss.end());
    for(int i = 1; i < liss.size(); i++)cout<< liss[i];
    cout <<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

