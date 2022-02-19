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

int n, t;

struct SEG {
	// ~Some useful variables for the seg_tree construction~
	// change the data types when required;
	// change the sizes when required;

	const static int MaX = 1e5;
	int a[MaX], tree[4*MaX];
	
	void get() {
		//O(N);
		for(int i = 0; i<n; ++i)
			scanf("%d", &a[i]);
	}

	void bld(int lvl=0, int l=0, int r=n-1) {
		//O(N);
		if(l == r){
			tree[lvl] = a[l];
			return;
		}
		int mid = (l+r)/2;
		bld(2*lvl+1, l, mid);
		bld(2*lvl+2, mid+1, r);
		tree[lvl] = tree[2*lvl+1] + tree[2*lvl+2];
	}

	int qry(int lvl, int l, int r, int ql, int qr) {
		//O(logN)
		if(ql<=l && qr>=r) 
			return tree[lvl];
		if(ql>r || qr<l) 
			return 0;
		int mid = (l+r)/2;
		return qry(2*lvl+1, l, mid, ql, qr)+qry(2*lvl+2, mid+1, r, ql, qr);
	}

	void process() {
		//O(n);
		while(t--) {
			int u, y;
			cin >> u >> y;
			cout << qry(0,0,n-1,u,y) << '\n';
		}
	}
};


