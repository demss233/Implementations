#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vpii vector<vector<pair<int, int>>> 

const int mxx = 1e5;
int n, m;
vpii v(mxx);

void Dijkstra() {
	constexpr long long inf = 1e18;
	vector<ll> vis(n+1, 0), dp(n+1, inf);
    	priority_queue< pair< ll, int >, vector<pair< ll, int >>, greater<pair< ll, int >>> pq;
	pq.push({0, 1});
	dp[1] = 0;
	while(!pq.empty()) {
		int x = pq.top().second;
		pq.pop();
		if(vis[x]) continue;
		vis[x] = 1;
		for(auto X : v[x]) {
			if(dp[X.first] > dp[x] + X.second) {
				dp[X.first] = dp[x] + X.second;
				pq.push({dp[X.first], X.first});
			}
		}
	for(int i = 1; i <= n; ++i)
		cout << dp[i] << '\n';
}

int main() {    	
	cin >> n >> m;
	for(int i = 0; i < m; ++i) {
		int x, y, w;
		cin >> x >> y >> w;
		v[x].push_back({y, w});
	}
	Dijkstra();
}

