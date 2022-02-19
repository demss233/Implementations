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

typedef vector<string> vs;
string s;
vs v;
void generate(string t, int left, int right) {
	if(left==right) {
		pb(v, s);
		return;
	}
	fo(i,l,right) {
		swap(t[left],t[i]);
		generate(t,left+1,right);
		swap(t[left],t[i]);
	}
}
int main() {
	read(s);
	generate(s, 0, len(s));
	fo(i, 0, sz(v))
		write(v[i]);
}
