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
  const map<char, char> convert = {
    {'b', '1'}, {'c', '1'}, {'d', '2'}, {'w', '2'}, {'t', '3'}, {'j', '3'}, {'f', '4'}, {'q', '4'}, {'l', '5'}, {'v', '5'},
    {'s', '6'}, {'x', '6'}, {'p', '7'}, {'m', '7'}, {'h', '8'}, {'k', '8'}, {'n', '9'}, {'g', '9'}, {'z', '0'}, {'r', '0'}
  };
  int N;
  cin >> N;
  string output = "";
  REP(i, N) {
    string w;
    string ans = "";
    cin >> w;
    REP(j, w.size()) {
      auto it = convert.find(w[j]) != convert.end()? convert.find(w[j]) : convert.find(w[j]+32);
      if(it != convert.end()) ans += it->second;
    }
    if(ans != "") output += ans + " ";
  }
  if(output.size() != 0) output.pop_back();
  cout << output << endl;
  return 0;
}