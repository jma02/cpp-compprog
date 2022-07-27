#include <bits/stdc++.h>
#include <climits>

using namespace std;

vector<int> w, aux;
void mergesort(int l, int r){
    if(l == r) return;
    int m = l + (r-l)/2;
    mergesort(l,m);
    mergesort(m+1,r);
    aux.clear();
    
    int i = l, j = m+1;
    while(i <= m || j <= r){
        if(j > r || (i <= m && w[i]< w[j])){
            aux.push_back(w[i]);
            i++;
        }
        else{
            aux.push_back(w[j]);
            j++;
        }
    }
    for(int i = l; i <= r; i++){
        w[i] = aux[i-l];
    }
}
int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n; cin >> n;
    n*= 2;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        w.push_back(x);
    }
    mergesort(0, n-1);
    cout << '\n';
    int min_inst = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j< n; j++){
            vector<int> pairs;
            for(int k = 0; k < n; k++){
                if(k!=i && k!= j) pairs.push_back(w[k]);
            }
            int sum = 0;
            for(int k = 0; k < n-2; k+=2){
                sum+= pairs[k+1]-pairs[k];
            }
            min_inst = min(sum, min_inst);
        }
    }
    cout << min_inst << '\n';
}

