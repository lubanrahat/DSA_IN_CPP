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

  int arr[] = {5,3,4,2,1};
  int n = sizeof(arr)/sizeof(int);
  for(int i=1;i<n;i++) {
    for(int j=i;j>0;j--) {
      if(arr[j]<arr[j-1]) {
        swap(arr[j],arr[j-1]);
      }else {
        break;
      }
    }
  }

  for(int i=0;i<n;i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  return 0;
}