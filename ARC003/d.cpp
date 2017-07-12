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

void reverse(string &s);

int main() {
  int N;
  cin >> N;
  set<string> revDic;
  REP(i, N){
    string s;
    cin >> s;
    reverse(s);
    revDic.insert(s);
  }
  for(auto s : revDic) {
    reverse(s);
    cout << s << endl;
  }

  return 0;
}

void reverse(string &s){
  string s_rev = "";
  for(int i=s.size()-1; i>=0; i--) {
    s_rev += s[i];
  }
  s = s_rev;
}