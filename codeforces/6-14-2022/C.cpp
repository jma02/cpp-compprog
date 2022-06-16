#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()

typedef long long ll;
using namespace std;

void solve(){
    string board[8];
    bool c1 = false; int timer = 0; int row, col;
    for(int i = 0; i < 8; i++) cin >> board[i];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(c1 && timer == 1 && board[i][j] == '#'){
                row = i;
                col = j;
            }
            else if(c1 && timer < 1) timer++;
            else if(board[i][j] == '#' && !c1){
                c1 = true;
                timer = 0;
            }
            else{
                c1 = false;
                timer = 0;
            }
        }
    }
    cout << row << " " << col << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);  
    int T; cin >> T;
    while(T--){
        solve();
    }
}