#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define fo(i, j, k) for(int (i)=(j); (i)<(k); ++(i))
#define read(x) cin >> x
#define write(x) cout << x << endl

int i, j, n, a[100], dta;
int main() {
	read(n); 
	fo(i, 0, n) 
		read(a[i]);
	i=0, j=n-1;
	while(i<=j) {
		int mid=(l+r)/2;
		if(a[mid]==dta) return mid;
		else if(a[mid]<dta) l=mid+1;
		else r = mid-1;
	}
	return -1;
}
