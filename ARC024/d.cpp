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
    VI color(n);
    REP(i, n) cin >> color[i];

    int max_continuity_length = 1;
    int tmp = 1;
    REP(i, n*2) {
        if (color[i%n] == color[(i+1)%n]) tmp += 1;
        else {
            max_continuity_length = max(max_continuity_length, tmp);
            tmp = 1;
        }
    }
    max_continuity_length = max(max_continuity_length, tmp);

    if (max_continuity_length == 2*n+1) {
        cout << -1 << endl;
    }else{
        cout << int(ceil(max_continuity_length/2.0)) << endl;
    }
    

    return 0;
}
