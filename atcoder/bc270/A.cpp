#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int a, b; cin >> a >> b;
    bool solved[10];
    memset(solved, 0 , sizeof(solved));

    if(a==3 || b==3){
        solved[1]=1;
        solved[2]=1;
    }
    if(a==5 || b==5){
        solved[1]=1;
        solved[4]=1;
    }
    if(a==6 || b==6){
        solved[2]=1;
        solved[4]=1;
    }
    if(a==7 || b==7){
        solved[1]=1;
        solved[2]=1;
        solved[4]=1;
    }
    if(a==1 || b ==1){
        solved[1]=1;
    }

    if(a==2 || b ==2){
        solved[2]=1;
    }
    if(a==4 || b ==4){
        solved[4]=1;
    }
    int ans = 0;
    for(int i = 1; i < 8; i++){
        if(solved[i])ans+=i;
    }
    cout << ans << '\n';
}

