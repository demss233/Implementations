#include <bits/stdc++.h>
using namespace std;

const int mxN = 2e5+1;
ll n, m, a[mxN], tree[2*mxN];
 
void bld(int lvl, int l, int r) {
	if(l==r) {
		tree[lvl]=a[l];
		return ;
	}
	int mid = (l+r)/2;
	bld(2*lvl+1, l, mid);
	bld(2*lvl+2, mid+1, r);
	tree[lvl] = tree[2*lvl+1]+tree[2*lvl+2];
}
 
ll qry(int lvl, int l, int r, int ql, int qr) {
	if(l>=ql&&qr>=r)
		return tree[lvl];
	if(ql>r||qr<l)
		return 0;
	int mid = (l+r)/2;
	return qry(2*lvl+1, l, mid, ql, qr)+qry(2*lvl+2, mid+1, r, ql, qr);
}
 
void upd(int lvl, int l, int r, int si, int val) {
	if(l==r) {
		tree[lvl]=val;
		return ;
	}
	int mid = (l+r)/2;
	if(si<=mid)
		upd(2*lvl+1, l, mid, si, val);
	else
		upd(2*lvl+2, mid+1, r, si, val);
	tree[lvl]=tree[2*lvl+1]+tree[2*lvl+2];
}
