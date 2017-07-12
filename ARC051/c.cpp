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
  int r;
  VI x(3), y(3);
  cin >> x[0] >> y[0] >> r;
  cin >> x[1] >> y[1] >> x[2] >> y[2];
  bool red = true;
  bool blue = true;
  if(x[0]-r>=x[1] && x[0]+r<=x[2] && y[0]-r>=y[1] && y[0]+r<=y[2]) red = false;
  if(pow(abs(x[0]-x[1]), 2)+pow(abs(y[0]-y[1]),2)<pow(r,2)
    && pow(abs(x[0]-x[1]), 2)+pow(abs(y[0]-y[2]),2)<pow(r,2)
    && pow(abs(x[0]-x[2]), 2)+pow(abs(y[0]-y[1]),2)<pow(r,2)
    && pow(abs(x[0]-x[2]), 2)+pow(abs(y[0]-y[2]),2)<pow(r,2)) blue = false;

  if(red) cout << "YES" << endl;
  else cout << "NO" << endl;
  if(blue) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}