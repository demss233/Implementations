#include <bits/stdc++.h>
using namespace std;

string s[8];
int column[8];
int d1[15];
int d2[15];
int c = 0;
int n = 8;
 
void solve(int k){
	if(k==n){
		c++;
		return;
	}
	for(int a=0;a<n;++a){
		if(s[k][a]=='.' && column[a]==0 && d1[a-k+n-1]==0 && d2[k+a]==0){
			column[a]=1;d1[a-k+n-1]=1;d2[k+a]=1;
			solve(k+1);
			column[a]=0;d1[a-k+n-1]=0;d2[k+a]=0;
		}
	}
}
 
 
int main(){
	for(int a=0;a<n;++a){
		cin >> s[a];
	}
	solve(0);
	cout << c << endl;
}
