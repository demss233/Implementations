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
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define pf pop_front
 
const int mxx = 1e5+1;
int n, m;
bool ok = 0;
bool vis[mxx]={0}, res[mxx]={0};
vector<vector<int>> v(mxx);
map<int, int> parent;
 
void dfs(int i) {
	res[i] = 1;
	vis[i] = 1;
	for(int j : v[i]) {
		if(j == parent[j])
			continue;
		if(res[j]) {
			vector<int> ans;
			int y = i;
			ans.push_back(j);
			ans.push_back(i);
			while(y^j) {
				y = parent[y];
				ans.push_back(y);
			}
			cout << ans.size() << '\n';
			reverse(ans.begin(), ans.end());
			for(int k : ans)
				cout << k << " ";
			exit(0);
		} else {
			if(!vis[j]) {
				parent[j]=i;
				dfs(j);
			}
		}
	}
	res[i] = 0;
}
 
int main() {
	cin >> n >> m;
	for(int i = 0; i<m; ++i) {
		int a, j;
		cin >> a >> j;
		v[a].push_back(j);
	}
	parent[1]=-1;
	for(int i = 1; i<=n; ++i) {
		if(!vis[i])
			dfs(i);
	}
	cout << "IMPOSSIBLE" << '\n';
}