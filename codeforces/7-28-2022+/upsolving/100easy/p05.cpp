#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    vector<int> ans;
    for(int i = 0; i < s.size(); i+=2){
        ans.push_back(s[i]-'0');
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i <ans.size()-1; i++)cout << ans[i]<<"+";
    cout << ans[ans.size()-1];

}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

