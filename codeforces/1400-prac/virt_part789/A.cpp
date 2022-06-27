#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        map<int,int> seq;
        bool eq = false, zero = false;
        for(int i = 0; i < N; i++){
            int x; cin >> x;
            if(seq.count(x)){
                eq = true;
                seq[x]++;
            }
            else{
               seq[x] = 1;
            }
            if(x == 0) zero = true;
        }
        int ans = 0;
        if(zero){
            for(auto i : seq){
                if(i.first != 0){
                    ans+= i.second;
                }
            }
        }
        else if(eq){
            for(auto i : seq){
                if(i.second >= 2){
                    seq[i.first]--;
                    ans++;
                }
                break;
            }
            for(auto i : seq){
                if(i.first != 0){
                    ans += i.second;
                }
            }
        }
        else{
            for(auto i : seq){
                if(i.first != 0){
                    ans += i.second;
                }
            }
            ans++;
        }
        cout << ans << '\n';
    }
}
