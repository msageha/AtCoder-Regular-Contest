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
  int N,M,L,P,Q,R;
  cin >> N >> M >> L;
  cin >> P >> Q >> R;
  int ans = 0;
  for (int i=0; i<3; i++) {
    int nimotsu;
    if (N/P==0 || M/Q==0 || L/R==0) nimotsu = 0;
    else nimotsu = N/P * M/Q * L/R;
    ans = max(ans, nimotsu);
    swap(N, M);
    swap(M, L);
  }
  cout << ans << endl;
  return 0;
}