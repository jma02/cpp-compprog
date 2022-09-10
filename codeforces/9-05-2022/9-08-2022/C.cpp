#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    
    auto dlog = [](int x){
        return to_string(x).size();
    };

    vector<int> f(n), s(n);
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    priority_queue<int> a(f.begin(), f.end()), b(s.begin(), s.end()); 
    int ans = 0;
    while(a.size() > 0 || b.size() > 0){
        if(a.top() == b.top()){
            a.pop(); b.pop();
            continue;
        }
        else{
            if(a.top() > b.top()){
                a.push(dlog(a.top()));
                a.pop();
            }
            else{
                b.push(dlog(b.top()));
                b.pop();
            }
        }
        ans++;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

