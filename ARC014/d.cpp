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
  string ans = N==1 ? "WIN" : "DRAW";
  string word;
  cin >> word;
  set<string> words = {word};
  char last_char = word[word.size()-1];
  FOR(i, 1, N) {
    cin >> word;
    if(ans != "DRAW") continue; //標準入力を最後まで受け取るため
    if(last_char != word[0] || words.count(word)) {
      if(i%2==0)  ans = "LOSE";
      else ans = "WIN";
    }
    words.insert(word);
    last_char = word[word.size()-1];
  }
  cout << ans << endl;
  return 0;
}