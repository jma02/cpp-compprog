#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    for(int c = 1; c <= t; c++){
        int p; cin >> p;
        vector<string> arr(p);
        vector<string> ans(p);
        for(int i = 0; i < p; i++)cin>>arr[i];

        int bucket[26];
        memset(bucket, 0, sizeof(bucket));
        for(int i = 0; i < arr[0].size(); i++) bucket[arr[0][i]-65]++;
        for(int i = 0; i < 26; i++){
            while(bucket[i]--)ans[0]+=i+65;
        }
        bool possible = true; 
        for(int i = 1; i < p; i++){
            memset(bucket, 0, sizeof(bucket));
            for(int j = 0; j < arr[i].size(); j++) bucket[arr[i][j]-65]++;
            string construct = "";
            int ptr = 0, penalty = 0;
            while(ptr > -1 && construct.size() < arr[i].size()){
                int j = ans[i-1][ptr]-65+penalty;
                while(j < 26 && !bucket[j])j++;
                if(j == 26){
                    if(construct.size() > 0){
                        bucket[construct.back() - 65]++;
                        construct.pop_back();
                    }
                    ptr--;
                    penalty++;
                }
                else{
                    construct += j+65;
                    bucket[j]--;
                    if(construct > ans[i-1].substr(0, ptr+1)){
                        for(int j = 0; j < 26; j++){
                            while(bucket[j]--)construct+=j+65;
                        }
                    }
                    else ptr++;
                }
            }
            if(construct.size() == arr[i].size() && construct > ans[i-1]) ans[i] = construct;
            else{
                possible = false;
                break;
            }
        }
        if(possible){
            cout << "CASE #"<< c << ": POSSIBLE\n";
            for(int i = 0; i < p; i++) cout << ans[i] << " ";
            cout << '\n';
        }   
        else{
            cout << "CASE #" << c << ": IMPOSSIBLE\n";
        }
    }
}

