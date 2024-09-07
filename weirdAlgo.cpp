#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

#define int long long

signed main() {
  int n;
  cin >> n;
  cout << n << " ";
  while (n != 1) {
    if (n % 2 != 0) {
      n *= 3;
      n += 1;
      cout << n << " ";
    } else {
      n /= 2;
      cout << n << " ";
    }
  }

  cout << endl;

  return 0;
}
