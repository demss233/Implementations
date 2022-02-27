#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
//using namespace __gnu_pbds;

// typedef tree <pair < int, int > ,null_type, less < pair < int, int >> , rb_tree_tag, tree_order_statistics_node_update > ordered_set;

using ll = long long;
using ld = long double;

#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define ALL(x, n) x, x+n
#define SZ(x) sizeof(x)
#define endl "\n"
#define f first
#define s second
#define ub upper_bound
#define pb push_back
#define pf push_front
#define sorted(v) is_sorted(all(v))
#define ld lower_bound
#define pqueue priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
#define pop pop_back
#define ar array
#define gc (c = getchar())

#define debug(x) cout << #x << " " << x << endl
#define debug_(v, n) cout << "[ "; for(int i = 0; i<n; ++i) cout << v[i] << " "; cout << "]";  
#define debug__(v) cout << v.f << " " << v.s << endl;

#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x / (gcd(x, y)) * y

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef map<int, int> mint;
typedef unordered_map<char, int> fmap;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 

char GETC() {
	char c;
	while (isspace(gc))
		;
	return c;
}

int READ() {
	char c;
	while (gc < '-')
		;
	if (c == '-') {
		int x = gc - '0';
		while (gc >= '0') 
			x = x * 10 + c - '0';
		return -x;
	}
	int x = c - '0';
	while (gc >= '0') x = x * 10 + c - '0';
	return x;
}

int dx[8] = {1, 1, 1, 0, 0, -1, -1,-1};
int dy[8] = {1,-1, 0, 1, -1, 1, -1, 0};

int main() {
    cin.tie(NULL)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);

    int t;
    cin >> t;

    while(t--) solve();
}
