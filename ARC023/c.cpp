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
  int y, m, d;
  cin >> y;
  cin >> m;
  cin >> d;
  int basedate = 735369;
  if (m == 1 || m == 2) {y -= 1; m += 12;}
  int date = 365*y + y/4 - y/100 + y/400 + (306*(m+1))/10 + d - 429;
  cout << basedate - date << endl;
  return 0;
}