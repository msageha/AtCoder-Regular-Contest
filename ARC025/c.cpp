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
  VI D(7);
  VI J(7);
  for(int i=0; i<D.size(); i++) cin >> D[i];
  for(int i=0; i<J.size(); i++) cin >> J[i];
  int ans = 0;
  for(int i=0; i<D.size(); i++) ans += max(D[i], J[i]);
  cout << ans << endl;
  return 0;
}