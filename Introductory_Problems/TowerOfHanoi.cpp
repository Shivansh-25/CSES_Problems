// This problem took too much time ... idk why but i was unabel to wrap my head around how this recursion stack was working
// got it now tho... GG

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

void solve(int n, int start, int use, int end) {
  if (n == 0)
    return;
  solve(n-1, start, end, use);
  cout << start << " " << end << endl;
  solve(n-1, use, start ,end);
}

signed main() {
  int t;
  cin >> t;
  int minMove = (1 << t) - 1;
  cout << minMove << endl;
  solve(t, 1, 2, 3);
  return 0;
}
