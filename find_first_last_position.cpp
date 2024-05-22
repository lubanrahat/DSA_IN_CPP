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

  vector<int> arr = {5,7,7,8,8,10};
  int target = 8;

   int left = 0,right =arr.size()-1,mid,firstIndex=-1,secomdInseex=-1;

   //first index
   while(left<=right) {
    mid = left+(right-left)/2;
    if(arr[mid] == target) {
      firstIndex=mid;
      right = mid-1;
    }else if(arr[mid]<target) {
      left = mid+1;
    }else {
      right = mid-1;
    }
   }
   //second index
   left = 0;
   right = arr.size()-1;
   while(left<=right) {
    mid = left+(right-left)/2;
    if(arr[mid] == target) {
      secomdInseex = mid;
      left = mid+1;
    }else if(arr[mid]<target) {
      left = mid+1;
    }else {
      right = mid-1;
    }
   }

   vector<int> v;
   v.push_back(firstIndex);
   v.push_back(secomdInseex);

   cout<<v[0]<<endl;
   cout<<v[1]<<endl;
   

  return 0;
}