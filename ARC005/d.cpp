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
  int x, y;
  string W;
  bool right=false, left=false, up=false, down=false;
  cin >> x >> y >> W;
  x--; y--; //配列順に戻すため．
  if(W.size()==2) {
    if (W[1]=='U') up=true;
    else down=true;
  }
  switch (W[0]) {
    case 'R':
      right = true;
      break;
    case 'L':
      left = true;
      break;
    case 'U':
      up = true;
      break;
    case 'D':
      down = true;
      break;
    default:
      break;
  }
  VS c(9);
  REP(i, 9) cin >> c[i];
  string ans{c[y][x]};
  REP(i, 3) {
    if(right) {
      x++;
      if(x==9) {
        x = 7;
        right = false;
        left = true;
      }
    }
    else if(left) {
      x--;
      if(x==-1) {
        x = 1;
        right = true;
        left = false;
      }
    }
    if(down) {
      y++;
      if(y==9) {
        y=7;
        up = true;
        down = false;
      }
    }else if(up) {
      y--;
      if(y==-1) {
        y = 1;
        up = false;
        down = true;
      }
    }
    ans += c[y][x];
  }
  cout << ans << endl;
  return 0;
}
