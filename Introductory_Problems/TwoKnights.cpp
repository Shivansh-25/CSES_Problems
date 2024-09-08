#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
#include <array>
#include <set>
#include <map>
#include <cstring>
#include <queue>
#include <stack>
#include <chrono>
#include <random>
#include <functional>
#include <limits>

using namespace std;

#define int long long

signed main(){
  
  int n;
  cin >> n;
  for(int i = 1; i<=n; i++){
    int i2 = i*i;
    int initialAns = (i2*(i2-1))/2;
    if(i<=2)
      cout << initialAns << "\n";
    else{
      int removal = 4*(i-1)*(i-2);
      // 2 positions for 3x2 block and similarly 2 positions for the 2x3 block
      // number of 3x2 blocks = (i-1)*(i-2) & same number of 2x3 blocks
      int finalAns = initialAns - removal;
      cout << finalAns << "\n";
    }
  }
  return 0;
}
