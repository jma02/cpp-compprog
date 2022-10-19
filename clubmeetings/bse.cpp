#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    vector<int> sorted = {1,2,3,10,12,13};
    int pos_10 = upper_bound(sorted.begin(), sorted.end(), 10)-sorted.begin();


    vector<int> unsorted = {1,100, 0, -11, 231, 3};
    sort(unsorted.begin(), unsorted.end()); // you can use one more parameter!
                                            // a custom sorting function, but we
                                            // wont go into that today
    for(auto i : unsorted) cout << i << ' ';
}

