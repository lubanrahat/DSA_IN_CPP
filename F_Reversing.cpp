#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int s=0,e=n-1;
  while(s<=e) {
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;    

  return 0;
}