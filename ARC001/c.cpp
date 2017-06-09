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

//typedef
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;

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
  int ans[] = {0,0,0,0};
  cin >> N;
  string c;
  cin >> c;
  for(int i=0; i<N; i++) {
    ans[c[i] -'0' - 1]++;
  }
  int max = 0;
  int min = N;
  for(int i=0; i<4; i++) {
    if(ans[i] > max) max = ans[i];
    if(ans[i] < min) min = ans[i];
  }
  cout << max << " " << min << endl;
  return 0;
}