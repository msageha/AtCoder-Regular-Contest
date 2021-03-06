#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

//using
using VI = vector<int>;
using VVI = vector<VI>;
using VS = vector<string>;
using PII = pair<int, int>;
using LL = long long;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  for(int i=0;i<(n);i++)

//constant
const int INF = 1 << 29;
const double EPS = 1e-10;
const double PI = acos(-1.0);

//debug
#define dump(x)  cout << #x << " = " << (x) << endl;

int main() {
  int L, R;
  cin >> L >> R;
  VI l(L);
  VI r(R);
  int ans = 0;
  for(int i=0; i<L; i++) cin >> l[i];
  for(int i=0; i<R; i++) cin >> r[i];
  sort(l.begin(), l.end());
  sort(r.begin(), r.end());
  int l_index = 0;
  int r_index =0;
  while (l_index < L && r_index < R ) {
    // cout << l[l_index] << ":" << r[r_index] << endl;
    if(l[l_index] == r[r_index]) {ans++; l_index++; r_index++;}
    else if(l[l_index] > r[r_index]) r_index++;
    else l_index++;
  }
  cout << ans << endl;
  return 0;
}