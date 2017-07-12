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
  int A, B;
  cin >> A >> B;
  int diff = abs(A-B);
  int ans = diff/10;
  diff -= (diff/10)*10; //ここでdiffは，9以下になっている．
  if(diff >= 8) {
    ans += 10-diff+1;
  }else if(diff >= 5){
    ans += diff - 5 + 1;
  }else if(diff >= 3){
    ans += 5 - diff + 1;
  }else{
    ans += diff;
  }
  cout << ans << endl;
  return 0;
}