#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fo(i, j, k) for(int (i)=(j); (i)<(k); ++(i))
#define read(x) cin >> x
#define write(x) cout << x << endl
#define scan(x, y) cin >> x >> y
#define all(x) (x).begin(), (x).end()
#define np next_permutation
#define pb(i, j) i.push_back(j)
#define sz(x) (int)x.size()
#define len(x) (int)x.length()

int t,a[100],mx=-10000,bst=-1;
int main() {
	read(t);
	fo(i,0,t)
		read(a[i]);
	fo(i,0,t) {
		mx=max(a[i],mx+a[i]);
		bst=max(bst,mx);
	}
	write(bst);
}
