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
  VI date(3, 0);
  cin >> S;
  int i = 0;
  while(S != "") {
    if(S[0]!='/') {
      date[i] = date[i]*10 + (S[0] - '0');
    }else i++;
    S.erase(S.begin());
  }

  while(!(date[0]%date[1] == 0 && (date[0]/date[1])%date[2]==0)) {
    date[2]++;
    if(date[1]==2 && date[2]==30) {
      date[1]++;
      date[2]=1;
    }else if(date[1]==2 && date[2]==29) {
      if(date[0]%4!=0) {
        date[1]++;
        date[2]=1;
      }else if(date[0]%400!=0 && date[0]%100==0) {
        date[1]++;
        date[2]=1;
      }
    }else if(date[2]==31) {
      if(date[1]==4 || date[1]==6 || date[1]==9 || date[1]==11) {
        date[1]++;
        date[2] = 1;
      }
    }else if(date[2]==32) {
      date[1]++;
      date[2] = 1;
      if(date[1]==13) {
        date[1] = 1;
        date[0]++;
      }
    }
  }
  cout << date[0] << '/' << setfill('0') << setw(2) << right << date[1] << '/' << setfill('0') << setw(2) << right << date[2] << endl;
  return 0;
}