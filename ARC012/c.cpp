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
  string day;
  cin >> day;
  int ans = 0;
  if(day == "Monday") ans = 5;
  else if(day == "Tuesday") ans = 4;
  else if(day == "Wednesday") ans = 3;
  else if(day == "Thursday") ans = 2;
  else if (day == "Friday") ans = 1;
  cout << ans << endl;
  return 0;
}