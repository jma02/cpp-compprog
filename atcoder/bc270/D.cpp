#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector<int> arr(k);
    for(auto &i : arr)cin >> i;

    bool tak = 1;
    int ans = 0;
    int i = k-1;
    while(n>0){
        if(n-arr[i]>=0){
            if(tak)ans+=arr[i];
            n-=arr[i];
        }
        else if(i > 0){
            while(n-arr[i]<0 && i > 0)i--;
            if(i == 0 && n-arr[i]<0){
                if(tak)ans+=n;
                n=0;
            }
            else{
                if(tak)ans+=arr[i];
                n-=arr[i];
            }
        }
        tak=!tak;
    }
    cout<<ans<<'\n';
}

