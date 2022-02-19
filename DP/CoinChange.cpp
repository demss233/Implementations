#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
const int MaX=100, MxN = 1e6;
ll n, x, a[MaX], dp[MxN + 1];
 
int main() {
	cin >> n >> x;
	FOR(i, 0, n)
		cin >> a[i];
	dp[0]=0;
	FOR(i, 1, x+1) {
		dp[i]=1e9;
		FOR(j, 0, n) 
			if(a[j]<=i) dp[i] = min(dp[i], dp[i-a[j]]+1);
	}
	cout << ((dp[x] >= 1e9 ? -1 : dp[x])) << '\n';
}
