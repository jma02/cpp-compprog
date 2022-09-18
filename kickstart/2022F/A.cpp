#include <bits/stdc++.h>

using namespace std;
struct fab{
    string c;
    int d;
    int u;

};

bool cmp1(fab a, fab b){
    if(a.c == b.c){
        return a.u < b.u;
    }
    else return a.c < b.c;
}

bool cmp2(fab a, fab b){
    if(a.d == b.d){
        return a.u < b.u;
    }
    else return a.d < b.d;
}

bool operator ==(fab a, fab b){
    return (a.c == b.c) && (a.d == b.d) && (a.u == b.u);
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t; cin >> t;
    for(int x = 1; x <= t; x++){
        int n; cin >> n;
        vector<fab> a(n), b(n), c(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].c >> a[i].d >> a[i].u;
            b[i] = a[i];
            c[i] = a[i];
        }
        sort(b.begin(), b.end(), cmp1);
        sort(c.begin(), c.end(), cmp2);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(b[i] == c[i])ans++;
        }
        cout << "Case #"<<x<<": "<< ans<<'\n';
    }
}

