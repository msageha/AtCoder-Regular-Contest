#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <regex>
#include <set>
#include <stack>
#include <string>
#include <vector>

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
  double L, X, Y, S, D;
  cin >> L >> X >> Y >> S >> D;
  double dis = D-S;
  double ans;
  if(dis>0) {
    ans = max(0.0, (dis+L)/(Y-X));
    ans = min(dis/(X+Y), ans);
    dump(ans);
  } else {
    ans = max(0.0, dis/(Y-X));
    dump(ans);
    ans = min(L-dis/(X+Y), ans);
  }
  cout << ans << endl;
  return 0;
}