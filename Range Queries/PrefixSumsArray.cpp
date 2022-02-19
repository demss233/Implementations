#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN = 1e5 + 1; // you_can_change_it!;
int N, M, AR[mxN];

int main() {
	cin >> N >> M;	
	AR[0] = 0;	
	for(int i = 1; i<N; ++i) {
		cin >> AR[i];
		AR[i] += AR[i - 1];
	}
	for(int i = 0; i<M; ++i) {
		int A, B;
		cin >> A >> B;
		cout << AR[B] - AR[A - 1] << " ";
	}
	cout << "\n"; 
}
