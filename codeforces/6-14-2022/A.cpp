#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    int a; cin >> a;
    vector<int> runners(3);

    int total = 0;
    for(int &i : runners){
        cin >> i;
        if(i > a) total++;
    }
    cout << total << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
}