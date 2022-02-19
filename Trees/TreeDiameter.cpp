#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
using ll = long long;
using ld = long double;
using ar = array<int, 2>;
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
 
const int mxx = 2e5;
int n, x, dist1=0, dist2=0;
vector<vector<int>> v(mxx+1);
bool vis[mxx+1] = {0}, vis2[mxx+1]={0};
 
void dfs1(int i, int tp) {
	vis[i]=1;
	if(dist1 < tp)
		dist1=tp, x=i;
	for(int j : v[i])
		if(!vis[j])
			dfs1(j, tp+1);
}
 
void dfs2(int i, int tp) {
	vis2[i]=1;
	if(dist2 < tp) 
		dist2 = tp;
	for(int j : v[i])
		if(!vis2[j])
			dfs2(j, tp+1);
}
 
int main() {
	cin >> n;
	for(int i = 0; i < n-1; ++i) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	int c1=0, c2=0;
	dfs1(1,c1);
	dfs2(x,c2);
	cout << dist2 << '\n';
}