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
  int n;
  cin >> n;
  int s = 1;
  for (int i = 1; i <= n; i++) {
    s = (s * 2) % ((int)1e9 + 7);
  }
  cout << s << endl;

  return 0;
}
