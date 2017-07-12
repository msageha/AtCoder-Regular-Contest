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
  int maxAns = 0;
  int minAns;
  int inputMax = 0;
  REP(i, N) {
    int d;
    cin >> d;
    maxAns += d;
    if(inputMax<d) inputMax = d;
  }
  minAns = inputMax > maxAns-inputMax ? inputMax-(maxAns-inputMax) : 0;
  cout << maxAns << "\n" << minAns << endl;
  return 0;
}
