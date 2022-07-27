#include <bits/stdc++.h>
using namespace std;
int bst[100000];
int main(){
    int n; cin >> n;
    int edges = (1 << (n+1)) - 1;
    for(int i = 2; i <= edges; i++){
        cin >> bst[i];
    }
    long long ans = 0;
    for(int i = edges; i >= 1; i--){
        int x = bst[2*i];
        int y = bst[2*i + 1];
        bst[i] += max(x,y);
        ans += 2*max(x,y) - x - y;
    }
    cout << ans << '\n';
    return 0;
}
