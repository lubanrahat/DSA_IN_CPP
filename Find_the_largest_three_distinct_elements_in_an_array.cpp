#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

bool is_sorted(vector<int> arr) {
  if(arr.size() == 0 || arr.size() == 1) return true;
  for(int i=1;i<arr.size();i++) {
    if(arr[i-1] > arr[i]) return false;
  }
  return true;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {1,0,0,1,0,1,0,1,1,1,0};
  int cnt1=0;
  for(int i=0;i<arr.size();i++) {
    if(arr[i]==0) cnt1++;
  }

  for(int i=0;i<cnt1;i++) {
    arr[i]=0;
  }
  for(int i=cnt1;i<arr.size();i++) {
    arr[i]=1;
  }

  for(int i:arr) {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}