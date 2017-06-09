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
  VI e(6);
  int b;
  VI l(6);
  REP(i, 6) cin >> e[i];
  cin >> b;
  int ans = 0;
  bool b_check = false;
  REP(i, 6) {
    int num;
    cin >> num;
    bool check = false;
    REP(i, 6) {
      if(e[i]==num) check = true;
    }
    if (check) ans++;
    else if(b == num) b_check = true;
  }
  if(ans == 6) ans++;
  else if(ans==5 && b_check) ans++;
  if (ans < 3) ans = 0;
  else ans = 8 - ans;
  cout << ans << endl;
  return 0;
}