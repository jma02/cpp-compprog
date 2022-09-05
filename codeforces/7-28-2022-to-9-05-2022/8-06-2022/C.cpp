#include <bits/stdc++.h>

using namespace std;

vector<int> ans;

void ps(int n){
    if(n < 0)return;
    int x = 0;
    while(x*x<n)x++;
    int gap = x*x-n;
    for(int i = gap; i <= n; i++)ans.push_back(i);
    ps(gap-1);
}

void solve(){
    ans.clear();
    int n; cin >> n;
    n--;
    ps(n);
    for(int i = ans.size()-1; i>=0;i--)cout << ans[i]<<" ";
    cout << '\n';
}


int main(){
    ios_base::sync_with_stdio(false);  
//    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

