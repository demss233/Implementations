#include<bits/stdc++.h>
using namespace std;
 
int t;
vector<int> v;
 
int main() {
	cin >> t;
	for(int i = 0; i < t; ++i) {
		int a;
		cin >> a;
		int k = lower_bound(v.begin(), v.end(), a)-v.begin();
		if(k<(int)v.size())
			v[k]=a;
		else
			v.push_back(a);
	}
	cout << v.size() << endl;
}
