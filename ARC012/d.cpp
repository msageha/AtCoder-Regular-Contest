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
  double N, va, vb, L, ans;
  cin >> N >> va >> vb >> L;
  REP(i, N) {
    L = (L/va)*vb;
  }
  cout.setf(std::ios_base::scientific, std::ios_base::floatfield); std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  cout << setprecision(numeric_limits<double>::max_digits10) << L << endl;
  return 0;
}