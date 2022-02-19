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

#define debug(x) cout << #x << " " << x << endl
#define debug_(v, n) cout << "[ "; for(int i = 0; i<n; ++i) cout << v[i] << " "; cout << "]";  
#define debug__(v) cout << v.f << " " << v.s << endl;

#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) a / (gcd(x, y)) * b

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef map<int, int> mint;
typedef map<char, int> fmap;


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 

int main() {
	freopen("input.txt", "r", stdin);
    // cin.tie(NULL)->sync_with_stdio(0);
    // cin.exceptions(cin.failbit);

}