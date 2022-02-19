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
 
const int MxM = 1e5, MxN = 1e9+7;
int n, m;
vector<vector<int>> v(MxM+1);
 
int main() {
	cin >> n >> m;
	for(int i = 0; i<m; ++i) {
		int t, y;
		cin >> t >> y;
		v[t].push_back(y);
		v[y].push_back(t);
	}
	int dis[n+1], pren[n+1];
	FOR(i,2,n+1) dis[i] = MxN;
	queue<int> q;
	q.push(1);
	dis[1]=0;
	while(sz(q)) {
		int x = q.front();
		q.pop();
		for(int u : v[x]) {
			if(dis[u] == MxN) {
				dis[u] = dis[x] + 1;
				pren[u] = x;
				q.push(u);
			}
		}
	}
	if(dis[n]==MxN) {
		cout << "IMPOSSIBLE";
		return 0;
	}
	cout << dis[n]+1 << '\n';
	vector<int> an;
	int y = n;
	an.push_back(y);
	while(y!=1) {
		y = pren[y];
		an.push_back(y);
	}
	reverse(all(an));
	for(int i : an) 
		cout << i << " ";
}
