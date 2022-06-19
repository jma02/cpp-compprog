#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;
/*
string pal[16] = {"01:10", "02:20", "03:30", "04:40", "05:50",
                  "11:11", "22:22", "12:21", "13:31", "14:41",
                  "15:51", "10:01", "20:02", "21:12", "23:32",
                  "00:00"};
*/
int ind[16] = {0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412};
void solve(){
    int x;
    int hr, m;
    scanf("%d:%d", &hr, &m);
    cin >> x;
    m += (hr*60);
    int init = m;
    int ans = 0;
    int cnt = 0;
    set<int> times;
    while(cnt < 1440){
        times.insert(m);
        m += x;
        m%=1440;
        cnt++;
    }
    for(int i : times){
        for(int j : ind){
            if(i == j) ans++;
        }
    }
    cout << ans << '\n';
}

int main(){
    // ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
}