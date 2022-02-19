#include <bits/stdc++.h>
using namespace std;

const int N = 4 * 2e5 + 1;
int parent[N + 1], rnk[N + 1];


struct DSU {
	int n;

	void exec() {
		for(int i = 0; i<=n; ++i) 
			parent[i] = i, rnk[i] = 1;
	}

	int find(int i) {
		if(parent[i] == i) return i;
		return parent[i] = find(parent[i]);
	}

	void unite(int i, int j) {
		int x = find(i), y = find(j);
		if(x == y) return;

		if(rnk[x] < rnk[y]) 
			parent[x] = y;

		else if(rnk[x] > rnk[y])
			parent[y] = x;

		else 
			parent[y] = x, rnk[x] = rnk[x] + 1;
	}	

	bool sameSet(int i, int j) {
		return find(i) == find(j);
	}
};

