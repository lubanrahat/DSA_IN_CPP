#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {4,6,8,10,8,5};
  int left=0,right=arr.size()-1,answer;
  while(left<=right) {
    int mid=left+(right-left)/2;
    if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1]) answer=mid;
    else if(arr[mid]>arr[mid-1]) left=mid+1;
    else right=mid-1;
  }

  cout<<answer<<endl;

  return 0;
}