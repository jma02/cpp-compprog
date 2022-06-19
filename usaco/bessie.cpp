#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ifstream fin("paint.in");
    ofstream fout("paint.out");
    int a, b, c ,d, total, answer;
    fin >> a >> b >> c >> d;
    total = (b-a) + (d-c);
    int intersection = max((min(b,d) - max(a,c)), 0);
    answer = total - intersection;
    fout << answer;
}
