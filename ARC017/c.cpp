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

int main() { //エラトステネスの篩を行う
  int N;
  cin >> N;
  vector<bool> check(N+1, true);
  check[0] = false;
  check[1] = false;
  int min_prime = 2;
  while (min_prime < N) {
    for(int i=min_prime;i<=N; i += min_prime) {
      check[i] = false;
    }
    while (! check[min_prime]) min_prime++;
    if(min_prime == N) {
        cout << "YES" << endl;
        return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}