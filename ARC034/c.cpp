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
  int N;
  cin >> N;
  double ans = 0;
  REP(i, N) {
    VI point(5);
    REP(i, 5) cin >> point[i];
    double sum_point = point[4]*110/900.0;
    REP(i, 4) sum_point += point[i];
    ans = max(ans, sum_point);
  }
  cout << setprecision(numeric_limits<double>::max_digits10) << ans << endl;
  return 0;
}