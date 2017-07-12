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
using VD = vector<double>;
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
  VI b(10);
  VI bRev(10);
  REP(i, 10) {
    int tmp;
    cin >> tmp;
    b[i] = tmp;
    bRev[tmp] = i;
  }
  int N;
  cin >> N;
  VI a(N);
  REP(i, N) {
    string tmp;
    cin >> tmp;
    REP(i, tmp.size()) tmp[i] = bRev[tmp[i]-'0'] + '0';
    a[i] = stoi(tmp);
  }
  sort(a.begin(), a.end());
  REP(i, N) {
    string ans = to_string(a[i]);
    REP(j, ans.size()) ans[j] = b[ans[j]-'0'] + '0';
    cout << ans << endl;
  }
  return 0;
}
