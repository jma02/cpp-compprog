#include <iostream>
#include <vector>

using namespace std;
int main(){
    int T, score, total;
    cin >> T;
    vector<std::string> outputs;
    for(int i = 0; i < T; i++){
        score = 0;
        total = 0;
        string str;
        cin >> str;
        if(str.length() %2 == 0){
            for(auto &c: str){
                score += (int)c - 96;
            }
            outputs.push_back("Alice "+to_string(score));
        }
        else if(str.length() == 1){
            score += (int)str[0] - 96;
            outputs.push_back("Bob "+to_string(score));
        }
        else{
            vector<int> preftab;
            preftab.push_back(0);
            for(auto &c: str){
                total += (int)c-96;
                preftab.push_back(total);
            }
            if(preftab[str.length()-1] > preftab[str.length()]-preftab[1]){
                outputs.push_back("Alice "+to_string(preftab[str.length()-1]-(str[str.length()-1]-96)));
            }
            else{
                outputs.push_back("Alice "+to_string(preftab[str.length()]-2*preftab[1]));
            }
        }        
    }
    for(string output: outputs) cout << output << "\n";
}