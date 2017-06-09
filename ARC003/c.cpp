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
  string grade;
  cin >> N;
  cin >> grade;
  int grade_sum = 0;
  for(int i=0; i<N; i++) {
    int num = 4 - (grade[i] - 'A');
    if (num == -1) num = 0;
    grade_sum += num;
  }
  double gpa = double(grade_sum)/double(N);
  cout << setprecision(std::numeric_limits<double>::max_digits10) << gpa << endl;
  return 0;
}