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

int binary_search(int *arr,int n,int target) {
  int left=0,right=n-1;
  while(left<=right) {
    int mid = left+(right-left)/2;
    if(arr[mid] == target)
      return mid;
    else if(arr[mid] < target)
      left = mid+1;
    else 
      right = mid-1;    
  }
  return -1;
}

bool isPrime(int n) {
  if(n == 0 || n == 1)
    return false;
  for(int i=2;i<=sqrt(n);i++) {
    if(n % i == 0)
      return false;
  }
  return true;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int target;
  cin>>target;

  int result = binary_search(arr,n,target);
  if(result!=-1)
    cout<<target<<" is found "<<result<<" index!"<<endl;
  else 
    cout<<target<<" is not found!"<<endl;    

  return 0;
}