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
  int correctSum = (n*(n+1))/2;
  int givenSum = 0;
  for(int i = 0; i<n-1; i++){
    int a;
    cin >> a;
    givenSum+=a;
  }
  cout << correctSum - givenSum << endl;


  return 0;
}
