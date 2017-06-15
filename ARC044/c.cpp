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
  LL N;
  cin >> N;
  if (N == 1) {
    cout << "Not Prime" << endl;
    return 0;
  }else if (N == 2) {
    cout << "Prime" << endl;
    return 0;
  }
  for(LL i=3; i<N+1; i += 2) {
    if(i==N) {
      cout << "Prime" << endl;
      return 0;
    }
    if(N%i == 0) {
      break;
    }
  }
  if ((N%10) != 5 && (N%10)%2==1 && N%3 !=0) cout << "Prime" << endl;
  else cout << "Not Prime" << endl;
  return 0;
}