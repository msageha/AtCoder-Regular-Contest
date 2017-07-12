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
  int N;
  cin >> N;
  VI status(6, 0);
  REP(i, N) {
    double M, m;
    cin >> M >> m;
    if(M >= 35) status[0]++;
    else if(M >=30) status[1]++;
    else if(M >= 25) status[2]++;
    if(m >= 25) status[3]++;
    else if(M >= 0 && m < 0) status[4]++;
    if(M < 0) status[5]++;
  }
  REP(i, status.size()) {
    if (i) cout << " ";
    cout << status[i];
  }
  cout << endl;
  return 0;
}