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

int solve(int m, int n) {
  int rowZyada = 0;
  int colZyada = 0;
  if (m > n) {
    rowZyada = 1;
  } else {
    colZyada = 1;
  }
  if (rowZyada) {
    int rowMax;
    if (m % 2 == 0) {
      return ((m*m) - (n - 1));
    } else {
      int rowMax = ((m - 1) * (m - 1)) + 1;
      int result = rowMax + (n - 1);
      return result;
    }
  } else {
    int colMax;
    if (n % 2 == 0) {
      colMax = ((n - 1) * (n - 1)) + 1;
      int result = colMax + (m - 1);
      return result;
    } else {
     return ((n*n) - (m-1));
    }
  }
}

signed main() {

  int tt;
  cin >> tt;
  while (tt--) {
    int m, n;
    cin >> m >> n;
    int ans = solve(m, n);
    cout << ans << endl;
  }

  return 0;
}
