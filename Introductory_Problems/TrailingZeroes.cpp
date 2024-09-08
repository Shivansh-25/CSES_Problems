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
  
  int t;
  cin >> t;
  int ans = 0;
  for(int i = 5; i<=t; i*=5){
    ans+=(t/i);
  }
  cout << ans << endl;

  return 0;
}
