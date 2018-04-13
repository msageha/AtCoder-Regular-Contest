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

int main() {
  string A;
  cin >> A;
  int ans = 0;
  REP(i, A.size()) {
    FOR(alpha, 'A', 'Z'+1) {
      if(A[i]==alpha) continue;
      string A_copy = A;
      A_copy[i] = alpha;
      bool palindrome = true;
      REP(j, A_copy.size()/2) {
        if(A_copy[j] != A_copy[A_copy.size()-1-j]) {
          palindrome= false;
          break;
        }
      }
      if (!palindrome) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}