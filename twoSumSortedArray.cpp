#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int arr[] = {2,7,11,15},target = 9;
  int n = sizeof(arr)/sizeof(int);

  bool flag = false;
  int start=0,end=n-1;
  while(start <= end) {
    if(arr[start]+arr[end]==target) {
      flag = true;
      break;
    }
    else if(arr[start]+arr[end]<target) start++;
    else end--;
  }

  if(flag) cout<<"YES\n";
  else cout<<"NO\n";

  return 0;
}