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
  int N, M;
  cin >> N >> M;
  stack<int> a;
  vector<bool> already_out(N+1, false);
  REP(i, M) {
    int tmp;
    cin >> tmp;
    a.push(tmp);
  }
  REP(i, M) {
    int tmp = a.top();
    a.pop();
    if (already_out[tmp]) continue;
    already_out[tmp] = true;
    cout << tmp << endl;
  }
  FOR(i, 1, N+1) {
    if(already_out[i]) continue;
    cout << i << endl;
  }
  return 0;
}