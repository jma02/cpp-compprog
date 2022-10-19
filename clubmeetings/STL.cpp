#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);

    
    int size = 100;
    vector<int> vector_of_ints(size, 0); // second parameter is starting value

    vector<pair<char,int>> vector_of_pairs_of_chars_and_ints; //you don't need to specify size or starting values;
    
    vector<vector<int>> vector_of_vector_of_ints; // you can create a vector of any container in the STL;
    vector<map<int,int>> vector_of_maps;

    vector_of_ints.push_back(1); // added the value 1 to the back of our vector;
    vector_of_ints.pop_back(); //removed the last value from our vector;


    map<int,int> map_of_ints_to_ints;
    map<char, int> alphabet;
    map<int, vector<int>> map_of_vectors;

    for(auto [key, val] : map_of_ints_to_ints){
        cout << key << ":"<<val << '\n';
    }

    map_of_ints_to_ints.insert({2,3});
    map_of_ints_to_ints[3]=4;

    set<int> set_of_ints;
    set<char> set_of_chars;
    
    set_of_ints.insert(1);
    bool contains_one = set_of_ints.count(1); // checks for membership: returns true if set contains param, else false
}

