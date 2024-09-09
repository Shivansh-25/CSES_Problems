#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <vector>

using namespace std;

#define int long long

signed main() {

  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      cout << "YES\n";
      continue;
    }
    else if(a==0 || b==0){
      cout << "NO\n";
      continue;
    }
    if ((a + b) % 3 == 0 && (2 * a) >= b && (2 * b) >= a) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
