#include <algorithm>
#include <array>
#include <bitset>
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

void solve(int n, int start, int aux, int to) {
  if (n == 0)
    return;
  solve(n - 1, start, to, aux);
  cout << start << " " << to << endl;
  solve(n - 1, aux, start, to);
}

signed main() {
  int t;
  cin >> t;
  int minMove = (1 << t) - 1;
  cout << minMove << endl;
  solve(t, 1, 2, 3);
  return 0;
}
