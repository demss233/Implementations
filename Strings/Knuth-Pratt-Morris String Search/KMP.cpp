#include <bits/stdc++.h>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
 
using namespace std;
//using namespace __gnu_pbds;
 
using ll = long long;
using ld = long double;
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
#define ar array
 
 
string s, pat;
const int mxN=1e6+1;
int lps[mxN];
 
struct KMP {
	int n=(int)s.length(), m=(int)pat.length(), cnt=0;
	void bld() {
		int i=0, j=1;
		while(j<m) {
			if(pat[i]==pat[j]) 
				++i, lps[j]=i, ++j;
			if(pat[i]!=pat[j]) {
				if(i==0) 
					lps[j]=0, ++j;
				else
					i=lps[i-1];
			}
		}
	}
	int kmp() {
		int i=0, j=0;
		while(i<n) {
			if(s[i]==pat[j])
				++i, ++j;
			if(j==m) {
				j=lps[j-1];
				++cnt;
			}
			if(s[i]!=pat[j]&&i<n) {
				if(j==0)
					i=i+1;
				else
					j=lps[j-1];
			}
		}
		return cnt;
	}
};
 
int main() {
	cin >> s >> pat;
	lps[0]=0;
	KMP an;
	an.bld();
	cout << an.kmp() << "\n";
}