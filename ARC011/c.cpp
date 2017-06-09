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
  int n, m, N;
  cin >> n >> m >> N;
  int ans = N;
  int left = 0; //残りの鉛筆
  while (true) {
    left += N%n;
    N = N/n*m;
    if(N == 0) break;
    ans += N;
    N += left;
    left = 0;
  }
  cout << ans << endl;
  return 0;
}