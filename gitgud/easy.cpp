#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int q; cin >> q;
    long long pos[200005];
    int l = -1, r = 1;
    q--;
    char a; cin >> a;
    long long id_n; cin >> id_n;
    pos[id_n]=0;
    while(q--){
        char a; cin >> a;
        long long id_n; cin >> id_n;
        if(a == 'L'){
            pos[id_n] = l;
            l--;
        }
        if(a == 'R'){
            pos[id_n] = r;
            r++;
        }
        if(a=='?'){
            cout << min(abs(l-pos[id_n]), abs(r-pos[id_n])) - 1<< '\n';
        }
    }
}

