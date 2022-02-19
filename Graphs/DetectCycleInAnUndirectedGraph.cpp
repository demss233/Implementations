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
 
const int mxx = 1e5;
int n, m;
vector<vector<int>> v(mxx+1);
bool vis[mxx+1]={0};//visited;
map<int, int> pren;
 
void dfs(int i) {
	vis[i]=1;
	for(int u : v[i]) {
		if(u == pren[i]) continue;
		if(vis[u]) {
			int y = i;
			vector<int> ans;
			ans.push_back(u);
			ans.push_back(i);
			while(y^u) {
				y = pren[y];
				ans.push_back(y);
			}
			reverse(all(ans));
			cout << ans.size() << '\n';
			for(int d : ans) 
				cout << d << " ";
			exit(0);
		} else {
			pren[u]=i;
			dfs(u);
		}
	}
}
 
int main() {
	cin >> n >> m;
	for(int i = 0; i<m; ++i) {
		int t, y;
		cin >> t >> y;
		v[t].push_back(y);
		v[y].push_back(t);
	}
	pren[1] = 0;
	for(int i = 1; i <= n; ++i) {
		if(!vis[i])
			dfs(i);
	}
	cout << "IMPOSSIBLE";
}
