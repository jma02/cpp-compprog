#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define all(v) v.begin(), v.end()

using ll = long long;
using p = pair<ll, ll>;

ll square(ll x){return x*x;}
ll norm(const p& point){return square(point.f)+square(point.s);}

p operator-(const p& l, const p& r){
    return mp(l.f-r.f, l.s-r.s);
}

ll cross(const p& a, const p& b){
    return a.f*b.s-a.s*b.f;
}
ll cross(const p& s, const p& a, const p& b){
    return cross(a-s, b-s);
}

vector<p> hull(const vector<p>& points){
    p start = *min_element(all(points));
    vector<p> cand, hull{start};
    for(int i = 0; i < points.size(); i++){
        if(points[i] != start) cand.pb(points[i]);
    }
    sort(all(cand), [&](p p1, p p2){
        p x = p1 - start, y = p2 - start;
        ll angle = cross(x,y);
        return angle != 0 ? angle > 0 : norm(x) < norm(y);
    });
    for(p point : cand){
        while(hull.size() > 1 && cross(*(hull.end()-2), hull.back(), point) < 0){
            hull.pop_back();
        }
        hull.pb(point);
    }
    return hull;
}

int main(){
    int N; cin >> N;
    vector<p> points;
    while(N--){
        int x, y; cin >> x >> y;
        points.pb(mp(x,y));        
    }
    vector<p> ans = hull(points);
    cout << ans.size() << '\n';
    for(p point : ans){
        cout << point.f << " " << point.s << '\n';
    }
}