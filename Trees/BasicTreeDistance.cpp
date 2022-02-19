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
#define INF 1e18
 
const int mxx = 2e5+1;
int n;
vector<vector<int>> v(mxx);
 
void bfs(int i) {
	vector<ll> dis(n+1);
	vector<bool> vis={0};
	queue<int> q;
	q.push(i);
	dis[i]=0;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		if(vis[x]) continue;
		vis[x] = 1;
		for(int j : v[x]) {
			dis[j] = dis[x] + 1;
			q.push(j);
		}
	}
	int t = *max_element(dis.begin(), dis.end());
	--t;
	cout << t << " ";
}
 
int main() {
	cin >> n;
	if(n==1) {
		cout << "0";
		return 0;
	}
	for(int i = 0; i<n-1; ++i) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i = 1; i<=n; ++i)
		bfs(i);
	cout << '\n';
}