// 4
// 1 2 3 4
// 7
// 1 2 3 4 5 6 7 
// 1 7 5 
// 3 4 5 
//
// 8
// 1 2 3 4 5 6 7 8
// 1 8 3 6 
// 2 7 4 5 

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
  int totalSum = (n*(n+1))/2;
  if(totalSum%2){
    cout << "NO\n";
    return 0;
  }
  else {
    vector<int> v1;
    vector<int> v2;
    vector<int> marker(n+1,0);
    int currMax = n;
    int v1Sum = 0;
    int sumLeft = totalSum/2;
    while(v1Sum < totalSum/2){
      if(currMax <= sumLeft){
        v1.push_back(currMax);
        marker[currMax] = 1;
        v1Sum+=currMax;
        sumLeft-=currMax;
        currMax--;
      }
      else{
        v1.push_back(sumLeft);
        marker[sumLeft] = 1;
        v1Sum += sumLeft;
        sumLeft=0;
      }
    }

    for(int i = 1; i<n; i++){
      if(marker[i]==0){
        v2.push_back(i);
      }
    }

    cout << "YES\n";
    cout << v1.size() << endl;
    for(auto i: v1){
      cout << i << " ";
    }
    cout << "\n";
    cout << v2.size() << endl;
    for(auto i: v2){
      cout << i << " ";
    }
    cout << "\n";
  }

  return 0;
}
