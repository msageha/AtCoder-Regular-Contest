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
  int N, L;
  cin >> N >> L;
  VS amida(L);
  getline(cin, amida[0]); //前の入力によって，のみ改行が入力されてしまうため
  REP(i, L) getline(cin, amida[i]);
  string goal;
  getline(cin, goal);
  int ans;
  for(int i=0; i<N*2; i += 2) {
    int pos = i;
    REP(j, L) {
      if(pos != 0 && amida[j][pos-1]=='-') pos -= 2;
      else if(pos != N*2-2 && amida[j][pos+1]=='-') pos += 2;
    }
    if(goal[pos]=='o') {
      ans = i/2 + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
