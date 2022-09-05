#include <bits/stdc++.h>

using namespace std;

void solve(){
    string x; cin >> x;
    long long one = 0;
    bool two = false;
    vector<char> ans;
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '1')one++;
        else{
            if(x[i]=='2')two=true;
            ans.push_back(x[i]);
        }
    }
    if(two){
        int j = 0;
        while(ans[j]!='2')j++;
        j++;
        for(int i = 0; i < j-1; i++){
            cout << ans[i];
        }
        for(int i = 0; i < one; i++){
            cout << 1;
        }
        for(int i = j-1; i < ans.size(); i++){
            cout << ans[i];
        }
    }
    else{
        for(auto i : ans) cout << i;
        for(int i = 0; i < one; i++){
            cout << 1;
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

