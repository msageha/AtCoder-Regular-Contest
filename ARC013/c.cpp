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

bool permutation(VVI &permuV, VI &inputV, int i, int j) { //iとjを入れ替える
  if(i >= inputV.size()) return false;
  if (j >= inputV.size()) {
    permutation(permuV, inputV, i+1,i+2);
    return false;
  }
  swap(inputV[i], inputV[j]);
  permuV.push_back(inputV);
  permutation(permuV, inputV, i, j+1);
  swap(inputV[i], inputV[j]);
  permutation(permuV, inputV, i, j+1);
  return true;
}

int main() {
  int N,M,L,P,Q,R;
  cin >> N >> M >> L;
  VI inputV{N, M, L};
  VVI permuV(1, inputV);
  cin >> P >> Q >> R;
  int ans = 0;
  permutation(permuV, inputV, 0, 1);

  for (int i=0; i<permuV.size(); i++) {
    int nimotsu;
    if (permuV[i][0]/P==0 || permuV[i][1]/Q==0 || permuV[i][2]/R==0) nimotsu = 0;
    else nimotsu = permuV[i][0]/P * permuV[i][1]/Q * permuV[i][2]/R;
    ans = max(ans, nimotsu);
    if (i%2==0) swap(N, M);
    if (i%3!=0) swap(M, L);
  }
  cout << ans << endl;
  return 0;
}