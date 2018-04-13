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
    int n, c;
    cin >> n >> c;
    VI a(n);
    REP(i, n) {
        cin >> a[i];
    }
    int min_diff = INF;
    FOR(i, 1, 11) {
        FOR(j, 1, 11) {
            if(i==j) continue;
            int tmp_diff = 0;
            REP(k, n) {
                if(k%2==0 && i != a[k]) tmp_diff++;
                else if(k%2==1 && j != a[k]) tmp_diff++;
            }
            min_diff = min(min_diff, tmp_diff);
        }
    }
    cout << min_diff*c << endl;
    return 0;
}