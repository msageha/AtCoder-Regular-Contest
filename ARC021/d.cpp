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
    int L;
    cin >> L;
    VI B(L);
    REP(i, L) {
        cin >> B[i];
    }
    VI A(L);
    A[0] = 0;
    int tmp = 0;
    REP(i, L-1) {
        tmp ^= B[i];
        A[i+1] = A[0]^tmp;
    }
    if (tmp == B[L-1]) {
        REP(i, L) {
            cout << A[i] << endl;
        }
    }else{
      cout << -1 << endl;
    }
    return 0;
}