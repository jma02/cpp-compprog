#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll T, df, cf, uf, dogs, cats, suff;
    vector<string> o;
    cin >> T;
    while(T--){
        cin >> df >> cf >> uf >> dogs >> cats;
        df -= dogs;
        if(df < 0) uf += df;
        cf -= cats;
        if(cf < 0) uf += cf;
        uf >= 0 ? o.push_back("YES") : o.push_back("NO");
    }
    for(string in : o) cout << in << endl;
}