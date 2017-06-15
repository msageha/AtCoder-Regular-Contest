#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
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
  double N, A, B;
  cin >> N >> A >> B;
  VI S(N);
  int maxS=0, minS=INF;
  REP(i, N) {
    cin >> S[i];
    maxS = max(maxS, S[i]);
    minS = min(minS, S[i]);
  }
  if(maxS-minS==0) {
    cout << -1 << endl;
    return 0;
  }
  double P = B/(maxS-minS);
  double average = 0;
  REP(i, N) average += S[i]*P;
  average /= N;
  double Q = A - average;
  cout << setprecision(numeric_limits<double>::max_digits10) << P << " " << Q << endl;
  return 0;
}