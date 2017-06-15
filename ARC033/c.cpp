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

int subStr(int N, int i) { //長さNの文字列において長さiの部分文字列の個数を返す
  return N - i + 1;
}

int main() {
  LL N;
  cin >> N;
  int ans = 0;
  FOR(i, 1, N+1) ans += subStr(N, i);
  cout << ans << endl;
  return 0;
}