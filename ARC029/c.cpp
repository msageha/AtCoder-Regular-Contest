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

int N, M;
VI t;
int search(int i, int u);
int ans;
int main() {
  cin >> N;
  int t_sum=0;
  REP(i, N) {
    int tmp;
    cin >> tmp;
    t.push_back(tmp);
    t_sum += tmp;
  }
  M = ceil(t_sum/2.0);
  // t_sum/2以上で，最小の部分和を求めればよい．
  if (N==1) ans = t[0];
  else {
    ans = M;
    search(0, 0);
  }
  cout << ans << endl;
  return 0;
}

int search(int i, int u){ //i番目以降の肉で，重さが2/M以上, u以下となるように選ぶ．
  if(i>=N) return 0;
  else if(u > M) return 0; //重さがM以上だったら，もう入れない
  else {
    int ret1 = search(i+1, u);
    int ret2 = search(i+1, u+ t[i]);
    if (ret1 >= M) return min(ret1, ans);
    if (ret2 >= M) return min(ret2, ans);
    return u;
  }
}