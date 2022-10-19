#include <iostream>
#include <vector>
using namespace std;


vector<char> merge(vector<char> a, vector<char> b){
    vector<char> m;
    int i = 0, j = 0;
    while(i < a.size() && j < b.size()){
        cout << "? ";
        cout << a[i] << ' ' << b[j] << '\n' << flush;
        char ans; cin >> ans;
        if(ans == '<'){
            m.push_back(a[i]);
            i++;
        }
        else{
            m.push_back(b[j]);
            j++;
        }
    }
    while(i < a.size()){
        m.push_back(a[i]);
        i++;
    }
    while(j < b.size()){
        m.push_back(b[j]);
        j++;
    }
    return m;
}


vector<char> mergesort(vector<char> arr){
    if(arr.size() == 1) return arr;
    vector<char> l, r;
    for(int i = 0; i < arr.size()/2; i++){
        l.push_back(arr[i]);
    }
    for(int i = arr.size()/2; i < arr.size(); i++){
        r.push_back(arr[i]);
    }
    l = mergesort(l);
    r = mergesort(r);
    return merge(l, r);
}
void solve(){
    int N, Q; cin >> N >> Q;
    vector<char> balls(N);
    for(int i = 0; i < N; i++) balls[i] = (char)'A'+i;
    if(N > 5){
        balls = mergesort(balls);
        cout << "! ";
        for(char i : balls) cout << i;
        cout << '\n' << flush;
    }
    else{
        cout << "? " << balls[0] << ' ' << balls[1] << '\n' << flush;
        char ans; cin >> ans;
        if(ans == '>') swap(balls[0], balls[1]);
        cout << "? " << balls[1] << ' ' << balls[2] << '\n' << flush;
        if(ans == '>') swap(balls[1], balls[2]);
        cout << "? " << balls[1] << ' ' << balls[3] << '\n' << flush;
        if(ans == '>'){
            swap(balls[1], balls[3]);
            swap(balls[2], balls[4]])
    }
}

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    solve();
}

