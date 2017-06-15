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
  int N, K;
  cin >> N >> K;
  VI t(N);
  REP(i, N) cin >> t[i];
  int sum = t[0] + t[1];
  int ans = -1;
  FOR(i, 2, N) {
    sum += t[i];
    if(sum < K) {
      ans = i+1;
      break;
    }
    sum -= t[i-2];
  }
  cout << ans << endl;
  return 0;
}