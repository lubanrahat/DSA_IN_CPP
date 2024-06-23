#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

bool binary_search(vector<int> arr,int target) {
  int left=0,right=arr.size()-1;
  while(left<=right) {
    int mid=left+(right-left)/2;
    if(arr[mid]==target) return true;
    else if(arr[mid]<target) left=mid+1;
    else right=mid-1;
  }
  return false;
}

bool isPrime(i64 n) {
  if(n == 0 || n == 1) return false;
  for(int i=2;i<=sqrt(n);i++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;
  rep(i,tt) {
    int n;
    cin>>n;
    vector<int> arr(n);
    rep(i,n) {
      cin>>arr[i];
    }
    int target;
    cin>>target;
    if(binary_search(arr,n)) {
      cout<<target<<" found!"<<endl;
    }else {
      cout<<target<<" is not found!"<<endl;
    }
  }

  return 0;
}