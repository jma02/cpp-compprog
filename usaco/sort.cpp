#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> aux, v;

void merge_sort(int l, int r){
    if(l == r) return;
    int m = l + (r-l)/2;
    merge_sort(l, m);
    merge_sort(m+1, r);

    aux.clear();
    int i = l, j = m+1;
    while(i <= m || j <= r){
        if(j > r || (i <= m && v[i].first < v[j].first)){
            aux.push_back(v[i]);
            i++;
        }
        else if(j > r || ((i<=m && v[i].first == v[j].second) && v[i].second < v[j].second)){
                aux.push_back(v[i]);
                i++;
        }

        else{
            aux.push_back(v[j]);
            j++;
        }
    }
    for(int i = l; i <= r; i++){
        v[i] = aux[i-l];
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back({x,y});
    }
    merge_sort(0, n);
    
    int ans = 0;
    queue<pair<int,int>> q;
    q.push({0,0});
    for(int i = 0; i <= n; i++){
        q.push(v[i]);
        ans+=max(0, q.back().first-ans)+q.back().second;
        q.pop();
    }
    cout << ans;
}

