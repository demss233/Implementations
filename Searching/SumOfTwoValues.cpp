#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
using ll = long long;
using ld = long double;
//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
//typedef tree <
//        pair < int, int > ,
//        null_type,
//        less < pair < int, int >> ,
//        rb_tree_tag,
//        tree_order_statistics_node_update > ordered_set;
 
#define FOR(i, a, b) for (int i=a; i<=(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define EACH(i, j) for(int i : j) 
 
#define sz(x) (int)(x).size()
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) (x).begin(), (x).end()
#define pf pop_front
#define ins(x, y) x.push_back(y)
#define add(x, y) x.insert(y)
 
 
int main() {
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> v;
	for(int i =0 ; i<n; ++i) {
		int x;
		cin >> x;
		v.push_back({x, i});
	}
	sort(v.begin(), v.end());
	for(int i = 0; i<n; ++i) {
		int x = m-v[i].first;
		pair<int, int> p = {x, v[i].second+1};
		auto y = lower_bound(v.begin(), v.end(), p);
		if(y->first==x) {
			cout << v[i].second+1 << " " << y->second+1 << "\n";
			exit(0);
		}
	}
	cout << "IMPOSSIBLE" << "\n";
}
