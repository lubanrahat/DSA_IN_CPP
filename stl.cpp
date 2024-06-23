#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int arr[] = {2,1,3};
  int n = sizeof(arr)/sizeof(int);
  vector<int> ans;

  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[i]==arr[j]) {
        ans.push_back(arr[i]);
      }
    }
  }

  if(!ans.empty()) {
    for(int i:ans) {
      cout<<i<<" ";
    }
    cout<<endl;
  }else {
    cout<<"-1"<<endl;
  }

  return 0;
}