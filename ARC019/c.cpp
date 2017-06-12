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
  string S;
  cin >> S;
  string ans;
  for(int i=0; i<S.size(); i++) {
    switch (S[i]) {
      case 'O':
      case 'D':
        ans += '0';
        break;
      case 'I':
        ans += '1';
        break;
      case 'Z':
        ans += '2';
        break;
      case 'S':
        ans += '5';
        break;
      case 'B':
        ans += '8';
        break;
      default:
        ans += S[i];
    }
  }
  cout << ans << endl;
  return 0;
}