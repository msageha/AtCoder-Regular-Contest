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
  int N, M, A, B;
  cin >> N >> M >> A >> B;
  int sum;
  int day = M;
  VI c(M);
  REP(i, M) {
    cin >> c[i];
  }
  REP(i, M){
    if (N <= A) N += B;
    if (N < c[i]) {
      day = i;
      break;
    }
    N -= c[i];
  }
  if (day == M) cout << "complete" << endl;
  else cout << day+1 << endl;
  return 0;
}