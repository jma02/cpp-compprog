#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin >> s;
    int n = s.size();
    int sum = 0, q = 0;
    for(int i = 1; i <= n; i++){
        if(s[i-1] == '(') sum++;
        else if(s[i-1] == ')') sum--;
        else q++;
    }
    // calculating remaining brackets
    // op - cl = -pref[n] : must equal 0 for RBS
    // op + cl = q
    int op = (q-sum)/2;
    int cl = (q+sum)/2;
    if(op == 0 || cl == 0){
        cout <<"YES\n";
        return;
    }
    // optimal op placement : place all opening brackets first
    // we only care for uniqueness, so we do the second optimal solution
    
    int ans = 0, buff = op;
    vector<int> pos;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '?' && op > 0){
            s[i] = '(';
            op--;
            pos.push_back(i);
        }
        else if(s[i] == '?' && op == 0){
            s[i] = ')';
            cl--;
            pos.push_back(i);
        }
    }
    swap(s[pos[buff-1]], s[pos[buff]]);
    for(int i = 0; i < n; i++){
        if(s[i] == '(') ans++;
        else ans--;
        if(ans<0)break;
    }
    if(ans < 0) cout << "YES\n";
    else cout << "NO\n";
 
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

