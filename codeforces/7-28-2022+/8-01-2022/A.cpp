#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, H, M; cin >> n >> H >> M;
    vector<pair<int,int>> alarms;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        alarms.push_back({x,y});
    }
    sort(alarms.begin(), alarms.end());
    int ans1=0, ans2=0;
    bool done = false;
    for(int i = 0; i < n; i++){
        if(alarms[i].first < H || (alarms[i].first == H && alarms[i].second < M))continue;
        if(alarms[i].first == H && alarms[i].second == M){
            done = true;
            break;
        }
        else{
            if(alarms[i].second < M){
                ans2 = 60-M+alarms[i].second;
                ans1 = alarms[i].first-H-1;
            }
            else{
                ans2 = alarms[i].second-M;
                ans1 = alarms[i].first-H;
            }
            done = true;
            break;
        }
    }
    if(!done){
            ans1=(24-H)+alarms[0].first;
            if(alarms[0].second < M){
                ans2 = 60-M+alarms[0].second;
                ans1--;
            }
            else{
                ans2 = alarms[0].second-M;
            }

         
    }
    
    cout << ans1 << " " << ans2 << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
}

