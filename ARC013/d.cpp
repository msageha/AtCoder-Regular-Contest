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
  int C, N=0, M=0, L=0;
  cin >> C;
  VI num(3);
  REP(i, C) {
    cin >> num[0] >> num[1] >> num[2];
    sort(num.begin(), num.end());
    N = max(N, num[0]);
    M = max(M, num[1]);
    L = max(L, num[2]);
  }
  cout << N*M*L << endl;

  return 0;
}