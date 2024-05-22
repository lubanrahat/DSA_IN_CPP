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

  vector<int> nums = {1,3,5,6};
  int target = 4;

  int left = 0,right = nums.size()-1,answer = nums.size();
  while(left<=right) {
    int mid = left+(right-left)/2;
    if(nums[mid] == target) {
      answer = mid;
      break;
    }else if(nums[mid] < target) {
      left = mid+1;
    }else {
      answer = mid;
      right = mid-1;
    }
  }

  cout<<answer<<endl;

  return 0;
}