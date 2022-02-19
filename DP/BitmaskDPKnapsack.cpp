#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mi;
//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a) for (int i = (a); i >= 0; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(i, j) for(int (i) : (j)) 
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define len(x) (int)x.length()
 
const int maxv =100, mxxv=1e5+1;
int n, x, a[maxv], dp[mxxv];
 
int main() {
	cin >> n;
	for(int i = 0; i<n; ++i) 
		cin >> a[i];
	dp[0] = 1;
	for(int i = 0; i < n; i++)
    		for(int j = mxxv; j>=a[i]; j--)
        		dp[j] |= dp[ j - a[i] ];
 
	vector<int> ans;
	for(int i = 1; i<=mxxv; ++i)
		if(dp[i])
			ans.push_back(i);
 
	cout << (int)ans.size() << '\n';
	for(int T : ans) 
		cout << T << " ";
	cout << '\n';
}
