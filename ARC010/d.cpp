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
using VD = vector<double>;
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
  vector<bool> date(366, false);
  REP(i, N) {
    string tmp;
    cin >> tmp;
    int m, d=0;
    if(tmp[1]=='/') {
      m = tmp[0]-'0';
      FOR(j, 2, tmp.size()) d = d*10 + (tmp[j]-'0');
    }else{
      m = 10 + tmp[1] - '0';
      FOR(j, 3, tmp.size()) d = d*10 + (tmp[j]-'0');
    }
    FOR(j, 1, m) {
      switch (j) {
        case 2:
          d += 29;
          break;
        case 4:
        case 6:
        case 9:
        case 11:
          d += 30;
          break;
        default:
         d += 31;
         break;
      }
    }
    date[d-1] = true;
  }
  REP(i, 366) {
    if(i%7==0 || i%7==6) {
      if(date[i]) {
        FOR(j, i, 366) if(!date[j]) {
          date[j] = true;
          break;
        }
      }
      else date[i] = true;
    }
  }
  int ans = 0;
  int continueBreak = 0;
  REP(i, 366){
    if(date[i]) continueBreak++;
    else{
      ans = max(ans, continueBreak);
      continueBreak=0;
    }
  }
  cout << ans << endl;
}
