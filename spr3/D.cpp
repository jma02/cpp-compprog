#include <bits/stdc++.h>

using namespace std;

void solve(){
    deque<int> d;
    string s; cin >> s;
    int n; cin >> n;

    char trash; cin >> trash;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cin >> trash;
        d.push_back(x);
    }
    bool rev = false;
    bool ok = true;

    int i = 0;
    while(i < s.size() && ok){
        if(s[i] == 'R') rev = !rev;
        else{
            if(!d.empty()){
                if(rev)d.pop_back();
                else d.pop_front();
            }
            else ok = false;
        }
        i++;
    }
    if(!ok){
        cout << "error\n";
        return;
    }
    vector<int> ret;
    while(!d.empty()){
        ret.push_back(d.front());
        d.pop_front();
    }
    string ans;
    ans+="[";
    if(rev){
        for(int i = ret.size()-1; i >= 0; i--) ans+=(std::to_string(ret[i])+",");
    }
    else{
        for(int i = 0; i < ret.size(); i++) ans+=(std::to_string(ret[i])+",");
    }
    cout << ans.substr(0, ans.size()-1) << "]"<<'\n';
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}

