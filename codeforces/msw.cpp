    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int T;
        cin >> T;
        vector<int> o;
        for(int i = 0; i <T; i++){
            int N, l, mini, distance;
            cin >> N >> l;
            vector<int> distances;
            vector<string> words(N);
     
            for(string &s : words) cin >> s;
            mini = INT_MAX;
            for(int i = 0; i < N; i++){
                for(int j = i + 1; j < N; j++){
                    distance = 0;
                    for(int k = 0; k < l; k++){
                        distance += abs(words[j][k] - words[i][k]);
                    }
                    mini = min(distance, mini);
                }
            }
            o.push_back(mini);
        }
        for(int i : o) cout << i << endl;
    }