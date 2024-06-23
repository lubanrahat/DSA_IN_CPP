#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {1,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,0};
  int n = arr.size();

  int start = 0,end = arr.size()-1;
  while(start < end) {
    if(arr[start] == 0) {
      start++;
    }else {
      if(arr[end] == 0) {
        swap(arr[start],arr[end]);
        start++;
        end--;
      }else {
        end--;
      }
    }
  }

  rep(i,n) cout<<arr[i]<<" ";
  cout<<endl;

  return 0;
}