#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> dom;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        dom.push_back(make_pair(a,b));
    }
 
    set<int> f, s;
    bool ok = true;
    for(int i = 0; i < n; i++){
        if(dom[i].first == dom[i].second){
            ok = false;
            break;
        }
        if(f.count(dom[i].first) || f.count(dom[i].second)){
            if(s.count(dom[i].first) || s.count(dom[i].second)){
                ok = false;
                break;
            }
            else{
                s.insert(dom[i].first);
                s.insert(dom[i].second);
            }
        }
        else{
            f.insert(dom[i].first);
            f.insert(dom[i].second);
        }
    }
    if(ok) cout << "YES";
    else cout << "NO";
    cout << '\n';
}
 
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int T; cin >> T;
    while(T--){
        solve();
    }
}
