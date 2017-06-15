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
  string S;
  getline(cin, S);
  bool check = true;
  string ans = "";
  REP(i, S.size()) {
    if(check) {
      switch (S[i]) {
        case 'L':
          ans += "< ";
          break;
        case 'R':
          ans += "> ";
          break;
        case 'A':
          ans += "A ";
          break;
        default:
          break;
      }
      check = false;
    }
    if (S[i] == ' ') check = true;
    else continue;
  }
  ans.pop_back();
  cout << ans << endl;
  return 0;
}