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

  int arr[] = {0,0,1,1,0};
  int n = sizeof(arr)/sizeof(int);

  // int start=0,end=n-1;
  // while(start<=end) {
  //   if(arr[start]==0) start++;
  //   else {
  //     if(arr[end]==0) {
  //       swap(arr[start],arr[end]);
  //       start++;
  //       end--;
  //     }
  //     else end--;
  //   }
  // }

  sort(arr,arr+n);

  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  cout<<endl;

  return 0;
}