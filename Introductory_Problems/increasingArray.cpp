#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

#define int long long

signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int moves = 0;
  int maxi = v[0];
  for (int i = 1; i < n; i++) {
    int curr = v[i];
    if (curr < maxi) {
      int required = maxi - curr;
      moves += required;
      curr += required;
    }
    maxi = curr;
  }
  cout << moves << endl;

  return 0;
}
