#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>

using namespace std;

#define int long long

signed main(){
  
  string s;
  cin >> s;
  int n = s.length();
  char prev = 'X';
  int maxi = 1;
  int current = 1;
  for(int i = 0; i<n; i++){
    char c = s[i];
    if(c == prev){
      current+=1;
    }
    else{
      current = 1;
    }
    maxi = max(maxi, current);
    prev = c;
  }
  cout << maxi << endl;



  return 0;
}
