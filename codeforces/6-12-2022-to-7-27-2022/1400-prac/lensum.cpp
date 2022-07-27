#include <bits/stdc++.h>
using ll = long long;

using namespace std;
void solve(){
	ll m, s; cin >> m >> s;
	ll max_sum = 9*m;
 
	if(m == 1 && s == 0){
		cout << "0 0 \n";
		return;
	}

	else if(s > max_sum || s < 1){
		cout << "-1 -1 \n";
		return;
	}
	vector<ll> min_out(m);
	min_out[0] = 1;
	ll running = 1; ll last = m - 1;
	while(running < s){
		min_out[last] += (ll)min((ll)9, s-running);
		running += (ll)min((ll)9, s-running);
		last--;
	}
	running = 9*m;
	vector<ll> max_out(m,9); last = m - 1;
	while(running > s){
		max_out[last] -= (ll)min((ll)9, running-s);
		running -= (ll)min((ll)9, running-s);
		last--;
	}
	for(ll n : min_out) cout << n;
	cout << " ";
	for(ll n : max_out) cout << n;
	cout << '\n';
}


int main(){
	solve();
}
