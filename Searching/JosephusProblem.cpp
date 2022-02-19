#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;
 
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define each(it,o) for(aut(it, (o).begin()); it != (o).end(); ++ it)
#define all(o) (o).begin(), (o).end()
#define pb(x) push_back(x)
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define INF 0x3f3f3f3f
#define read(p, x) scanf("%d%d", &p, &x);
 
typedef vector<int> vi; typedef pair<int,int> pii;typedef vector<pair<int,int> > vpii;
typedef long long ll;typedef vector<long long> vl;typedef pair<long long,long long> pll;
typedef vector<pair<long long,long long> > vpll;typedef vector<string> vs; typedef long double ld;
typedef unsigned long int uli;typedef vector<string> vs;typedef vector<float> vf;typedef pair<int, int> pair_i;
 
template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }
 
 
int main(){
  int n,k;
  cin >> n >> k; 
  int p =k%n ; oset<int>a ;
  for(int i=1;i<=n;i++)
    a.insert(i) ;
  while(a.size()){
    int r = *a.find_by_order(p) ;
    a.erase(r) ;  
    if(a.size())
      p=(p+k)%a.size() ;
    cout << r << " " ;
  }
}
