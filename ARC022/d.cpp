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
    int n;
    cin >> n;
    VI a(n);
    VI s(n, 0);
    REP(i, n) {
        cin >> a[i];
    }
    int r=0;
    int ans = 0;
    REP(i, n) {
        while(r<n && s[a[r]]==0) {
            s[a[r]]++;
            r++;
        }
        ans = max(ans, r-i);
        s[a[i]] = 0;
    }
    cout << ans << endl;
     return 0;
}