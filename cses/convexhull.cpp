#include <bits/stdc++.h>
typedef long long ll;
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define p pair<ll,ll>
#define f first
#define s second

using namespace std;

double polar_angle(p p1, p p2){
    if(p1.s == p2.s){
        return numeric_limits<double>::infinity();
    }
    else{
        return -(p2.f - p1.f) / (p2.s - p1.s);
    }
}

bool left_turn(p p1, p p2, p p3){ // determinant gives signed area of triangle -> neg = left, pos = right
    return //(p2.f*p3.s - p2.s*p3.f) - (p1.f*p3.s - p1.s*p3.f) + (p1.f*p2.s - p1.s*p2.f)
    p1.f*(p2.s - p3.s) - p2.f*(p1.s - p3.s) + p3.f*(p1.s - p2.s)
     > 0 ? true : false;
}

vector<p> hull(vector<p> points){
    p y_min = *min_element(all(points));
    vector<p> y_mins;
    for(p cand : points){
        if(cand.s == y_min.s) y_mins.pb(cand);
    }
    p starting_point = *max_element(all(y_mins));
    sort(all(points), [&](p p1, p p2){
        return polar_angle(p1, starting_point) > polar_angle(p2, starting_point);
    });
    reverse(all(points));
    vector<p> convex_hull;
    for(p point : points){
        auto iter = convex_hull.end();
        while(convex_hull.size() > 2 && !left_turn(*(iter - 3), *(iter - 2), *(iter - 1))){
            iter = convex_hull.end() - 2;
            convex_hull.erase(iter);
        }
        convex_hull.pb(point);
    }
    return points;
}

int main(){
    int N; cin >> N;
    vector<p> pts;
    for(int i = 0; i < N; i++){
        ll x,y; cin >> x >> y;
        pts.pb(mp(x,y));   
    }
    vector<p> hull_final = hull(pts);
    cout << hull_final.size() << '\n';
    for(p point : hull_final){
        cout << point.f << " " << point.s << '\n';
    }
}