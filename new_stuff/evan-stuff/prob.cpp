#include <bits/stdc++.h>

using namespace std;

int main(){
    char arr[6] = {'s', 'o', 'u', 'r', 'c', 'e'};
    char *ptr = arr; //ptr to arr[0]

    char tmp = ptr[3];// 's', 'o', 'u';


    ptr++;

    (*ptr) += 5; // take the value of 'o', and move it forward 5

    ptr++;

    *(ptr+1) = *ptr; // look at one forward of 'u', and set it to 'u'
    
        // stuuce

    *ptr = tmp;
    arr[5] = *(ptr-1);
    for(auto i : arr) cout << i;


}

