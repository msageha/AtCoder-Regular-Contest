#include <algorithm>
#include <cmath>
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

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n)  for(int i=0;i<(n);i++)

//constant
const int INF = 1 << 29;
const double EPS = 1e-10;
const double PI = acos(-1.0);

//debug
#define dump(x)  cout << #x << " = " << (x) << endl;

int main() { //エラトステネスの篩を行う
  int N, K;
  cin >> N >> K;
  int A = INF;
  int ascending = 1;
  int ans = 0;
  REP(i, N) {
    int tmp;
    cin >> tmp;
    if(tmp > A) ascending++;
    else ascending = 1;
    if(ascending>=K) ans++;
    A = tmp;
  }
  cout << ans << endl;
  return 0;
}