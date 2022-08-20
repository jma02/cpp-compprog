#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);  
    freopen("tracing.in", "r", stdin);
    freopen("tracing.out", "w", stdout);
    int N, T; cin >> N >> T;
    bool cow[N+1];
    for(int i = 1 ; i <= N ; i++){
        char x; cin >> x;
        if(x-'0')cow[i]=true;
        else cow[i]=false;
    }
    vector<vector<int>> a;
    for(int i = 0; i < T; i++){
        int t, c1, c2; cin >> t >> c1 >> c2;
        a.push_back({t, c1, c2});
    }
    sort(a.begin(), a.end());
    int ans = 0;
    vector<bool> state(N+1, false);
    vector<int> infected(N+1, 0);
    vector<int> cand;
    for(int i = 1; i <= N; i++){
        if(!cow[i])continue;
        bool sus = false;
        for(int k = 0; k <= T; k++){
            state.assign(N+1, false);
            infected.assign(N+1, 0);
            state[i] = true;
            for(int j = 0; j < T; j++){
                int x=a[j][1], y=a[j][2];
                if(state[x]^state[y]){
                    int from = state[x]?x:y;
                    int to = state[x]?y:x;
                    if(infected[from]<k){
                        state[to]=true;
                        infected[from]++;
                    }
                }
                else if(state[x]&&state[y]){
                    infected[x]++;
                    infected[y]++;
                }
            }
            bool ok = true;
            for(int j = 1; j<=N; j++){
                if(state[j]!=cow[j])ok=false;
            }
            if(ok){
                if(!sus)ans++;
                sus=true;
                cand.push_back(k);
            }
        }
    }
    sort(cand.begin(), cand.end());
    if(cand[cand.size()-1]==T)cout<<ans<<" "<<cand[0]<<" "<<"Infinity\n";
    else cout<<ans<<" "<<cand[0]<<" "<<cand[cand.size()-1];
}
