#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

bool isPrime(i64 n) {
  if(n == 1 || n == 0) return false;
  for(int i=2;i<=sqrt(n);i++) {
    if(n % i == 0) {
      return false;
    }
  }
  return true;
}
bool isD(vector<int>arr) {
  for(int i=0;i<arr.size();i++) {
    for(int j=i+1;j<arr.size();j++) {
      if(arr[i]==arr[j]) {
        return false;
      }
    }
  }
  return true;
}
vector<int> lasgstThreeElements(vector<int>& arr) {
  vector<int> maxThree;
  int firsrElement,secondElement,thirdElement;
  firsrElement=secondElement=thirdElement=INT_MIN;
  for(int i=0;i<arr.size();i++) {
    if(arr[i]>firsrElement) {
      thirdElement=secondElement;
      secondElement=firsrElement;
      firsrElement=arr[i];
    }
    if(arr[i]>secondElement && arr[i]!=firsrElement) {
      thirdElement=secondElement;
      secondElement=arr[i];
    }
    if(arr[i]>thirdElement && arr[i]!=firsrElement && arr[i]!=secondElement) {
      thirdElement=arr[i];
    }
  }
  maxThree.push_back(firsrElement);
  maxThree.push_back(secondElement);
  maxThree.push_back(thirdElement);
  return maxThree;
}
bool binary_search(vector<int>&arr,int target) {
  int left=0,right=arr.size()-1;
  while(left<=right) {
    int mid=left+(right-left)/2;
    if(arr[mid]==target) return true;
    else if(arr[mid]<target) left=mid+1;
    else right=mid-1;
  }
  return false;
}
void solve(void) {
  int tt;
  cin>>tt;
  rep(i,tt) {
    int n;
    cin>>n;
    vector<int>arr(n);
    rep(i,n) cin>>arr[i];
    int target;
    cin>>target;
    if(binary_search(arr,target)) {
      cout<<target<<" is found!\n";
    }else {
      cout<<target<<" is not found!\n";
    }
  }
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  rep(i,tt) {
    int n;
    cin>>n;
    vector<int> arr(n);
    rep(i,n) cin>>arr[i];
    int option;
  cin>>option;

  switch (option)
  {
  case 1:
    cout<<"Binary search: "<<endl;
    solve();
    break;
  case 2:
    cout<<"Prime Numbers: "<<endl;
    rep(i,n) {
      if(isPrime(arr[i])) {
        cout<<arr[i]<<" is prime numbers!"<<endl;
      }else {
        cout<<arr[i]<<" is not prime numbers!"<<endl;
      }
    }
  default:
    break;
  }
  }

  return 0;
}