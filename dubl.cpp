#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

vector<int> findDuplicates(vector<int>arr) {
  vector<int> ans;
  int n = arr.size();
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;i++) {
      if(arr[i]==arr[j]) {
        ans.push_back(arr[i]);
      }
    }
  }
  return ans;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {2,3,1,2,3};

  vector<int> answer = findDuplicates(arr);

  for(int i:answer) {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}