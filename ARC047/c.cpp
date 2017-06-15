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
  int tab = 1;
  int ans = 0;
  int N, L;
  string S;
  cin >> N >> L >> S;
  REP(i, N) {
    if(S[i]=='+') tab++;
    else if(S[i]=='-') tab--;
    if(tab>L) {
      tab = 1;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}