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
using VD = vector<double>;
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
  VD name(26, 0);
  VD kit(26, 0);
  string tmp;
  cin >> tmp;
  REP(i, N) name[tmp[i]-'A']++;
  cin >> tmp;
  REP(i, M) kit[tmp[i]-'A']++;
  int ans = 0;
  REP(i, 26) {
    if(kit[i]==0) {
      if(name[i]>0) {
        ans = -1;
        break;
      }
    }else{ ans = max(int(ceil(name[i]/kit[i])), ans); }
  }
  cout << ans << endl;

  return 0;
}
