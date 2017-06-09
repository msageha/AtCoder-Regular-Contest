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

//typedef
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

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
  vector<PII> dots;
  double ans = 0;
  REP(i, N) {
    int x, y;
    cin >> x >> y;
    REP(i, dots.size()) {
      double length = sqrt(pow(x-dots[i].first, 2) + pow(y-dots[i].second, 2));
      if (ans < length) ans = length;
    }
    dots.push_back(make_pair(x, y));
  }
  cout << setprecision(numeric_limits<double>::max_digits10) << ans << endl;
  return 0;
}