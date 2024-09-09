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

vector<string> generateGrayCode(int n) {
  vector<string> grayCode;
  int totalCodes = 1 << n; // 2^n

  for (int i = 0; i < totalCodes; i++) {
    int grayNumber = i ^ (i >> 1); // the leftmost bit becomes 0 after shifting right 
                                   // when i take the xor of 0 with msb of the original digit 
                                   // i get the msb of the original digit in that place
    bitset<16> bits(grayNumber);
    string codeString = bits.to_string().substr(16-n);
    grayCode.push_back(codeString);
  }
  return grayCode;
}

signed main() {
  int n;
  cin >> n;
  vector<string> grayCode = generateGrayCode(n);
  for (string code: grayCode) {
    cout << code << endl;
  }

  return 0;
}
