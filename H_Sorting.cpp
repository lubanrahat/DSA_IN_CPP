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
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(arr[i]>arr[j])
        swap(arr[i],arr[j]);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;          

  return 0;
}