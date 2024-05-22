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

  int x;
  cin>>x;

  int left = 1,right=x,sqr;
  while(left<=right) {
    int mid = left+(right-left)/2;
    if(mid*1LL*mid == x) {
      sqr = mid;
      break;
    }else if(mid*1LL*mid < x) {
      sqr = mid;
      left = mid+1;
    }else {
      right = mid-1;
    }
  }
  cout<<sqr<<endl;

  return 0;
}