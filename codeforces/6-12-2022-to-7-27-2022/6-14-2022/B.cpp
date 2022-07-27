#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    int N; cin >> N;
    map<int,int> vec;
    for(int i = 0; i < N; i++){
        int A; cin >> A;
        if(vec.count(A)) vec[A]++;
        else vec[A] = 1;
    }
    auto iter = vec.begin();
    while(iter != vec.end()){
        if(iter->s <= 1){
            iter++;
            continue;
        }
        auto iter_2 = iter;
        iter_2++;
        while(iter_2->s == 1) iter_2++;
        if(iter_2 == vec.end()){
            vec[iter->f]-=2;
        }
        else{
            vec[iter->f]--;
            vec[iter_2->f]--;
        }
    }
    int total = 0;
    iter = vec.begin();
    while(iter != vec.end()){
        if(iter->s > 0) total++;
        iter++;
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