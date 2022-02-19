#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int mxx=2e5;
int n;
ll x, a[mxx];
 
int main() {
	cin.sync_with_stdio(0), cin.tie(0), cin.exceptions(cin.failbit);
	cin >> n >> x;
	ll s = 0;
	map<ll, int> mp;
	mp[0]++;
	ll ans=0;
	for(int i = 0; i<n; ++i) {
		cin >> a[i];
		s+=a[i];
		ans+=mp[s-x];
		mp[s]++;
	}
	cout << ans;
}
