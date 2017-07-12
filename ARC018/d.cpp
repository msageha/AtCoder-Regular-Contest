#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
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
using D = long double;      // 座標値の型。doubleを想定
using P = complex<D>;  // Point. 頂点
using VP = vector<P>;

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  for(int i=0;i<(n);i++)
#define X real()
#define Y imag()

//constant
const int INF = 1 << 29;
const double EPS = 1e-10;
const double PI = acos(-1.0);

//debug
#define dump(x)  cout << #x << " = " << (x) << endl;

// 外積 cross(a,b) = |a||b|sinθ
D cross(P a, P b) {
  return (conj(a)*b).Y;
}

// 多角形の符号付面積
D area(const VP& ps) {
  D a = 0;
  REP(i, ps.size()) a += cross(ps[i], ps[(i+1) % ps.size()]);
  return a / 2;
}

int combination(const VP& ps, int i, VP triangle) { //3つ組み合わせを作って面積を計算
  if(triangle.size() == 3 || i == ps.size()) return 0;
  int ans = combination(ps, i+1, triangle);
  triangle.push_back(ps[i]);
  ans += combination(ps, i+1, triangle);
  if(triangle.size() == 3) {
    D menseki = area(triangle);
    if(menseki != 0.0 && ceil(menseki) == menseki) return 1+ans;
  }
  return ans;
}

int main() {
  int N;
  cin >> N;
  VP points;
  REP(i, N) {
    double x, y;
    cin >> x >> y;
    P point(x, y);
    points.push_back(point);
  }
  VP triangle;
  int ans = combination(points, 0, triangle);
  cout << ans << endl;
  return 0;
}
