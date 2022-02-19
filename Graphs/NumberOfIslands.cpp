#include<bits/stdc++.h>
using namespace std;
 
const int mxx = 1e4;
int n, m, comp=0;
string s[mxx];
 
bool ok(int i, int j) {
	return s[i][j]=='.';
}
 
void dfs(int i, int j) {
	s[i][j]='#';
	if(ok(i+1, j))
		dfs(i+1, j);
	if(ok(i-1, j))
		dfs(i-1, j);
	if(ok(i, j+1))
		dfs(i, j+1);
	if(ok(i, j-1))
		dfs(i, j-1);
}
 
int main() {
	cin >> n >> m;
	for(int i = 0; i<n; ++i)
		cin >> s[i];
	for(int i = 0; i<n; ++i) {
		for(int j = 0; j<m; ++j) {
			if(ok(i, j)) {
				dfs(i, j);
				++comp;
			}
		}
	}
	cout << comp << endl;
}
