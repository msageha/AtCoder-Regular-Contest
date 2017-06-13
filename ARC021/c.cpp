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
  VVI A(4, VI(4));
  for (int i=0; i<4; i++) cin >> A[i][0] >> A[i][1] >> A[i][2] >> A[i][3];
  bool gameover = true;
  for (int i=0; i<A.size(); i++) {
    for (int j=0; j<A[0].size(); j++) {
      if (gameover && i+1 != A.size()) gameover = A[i][j] == A[i+1][j] ? false : true;
      if(gameover && j+1 != A[1].size()) gameover = A[i][j] == A[i][j+1] ? false : true;
    }
  }
  if (gameover) cout << "GAMEOVER" << endl;
  else cout << "CONTINUE" << endl;
  return 0;
}