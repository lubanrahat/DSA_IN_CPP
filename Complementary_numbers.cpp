#include <iostream>
#include <vector>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  vector<int> answer;

  int *arr = new int[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  int target;
  cin>>target;
  for(int i=0;i<n;i++) {
    for(int j=i+1;i<n;i++) {
      if(arr[i]+arr[j]==target) {
        answer.push_back(i);
        answer.push_back(j);
      }
    }
  }
  for(int i:answer) cout<<i<<" ";
  cout<<endl;

  return 0;
}