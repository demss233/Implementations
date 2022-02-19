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
 
const int MXX = 5e3;//equal to 5000+1(5001);
string t, p;
int dp[MXX+1][MXX+1], n, m;
 
int main() {
	cin >> t >> p;
	n = t.size(), m = p.size();
	for(int i = 0; i<=n; ++i) {
		for(int j = 0; j<=m; ++j) {
			 if (i == 0) dp[i][j] = j;
			 else if (j == 0) dp[i][j] = i;	
			 else if (t[i-1] == p[j-1])
                		dp[i][j] = dp[i-1][j-1];
			 else
				dp[i][j]= 1+min({dp[i][j-1], dp[i-1][j],dp[i-1][j-1]});		
		}
	}
	cout << dp[n][m] << '\n';
}
