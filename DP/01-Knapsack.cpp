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

const int MaX=1e3, MxX=1e5;
int N,X,a[MaX],b[MaX],dp[MxX+1];

void Knapsack() {
	FOR(i,0,N) {
		FORd(W,X)
			if(a[i] <= W) dp[W] = max(dp[W], dp[W-a[i]]+b[i]);
	}
}

int main() {
	cin >> N >> X;
	FOR(i,0,N) cin >> a[i];
	FOR(i,0,N) cin >> b[i];
	Knapsack();
	cout << dp[X] << '\n';
}
