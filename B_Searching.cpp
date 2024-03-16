#include <iostream>
using namespace std;

int searching(int arr[],int n,int target) {
  for(int i=0;i<n;i++)
    if(arr[i]==target)
      return i;
  return -1;    
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int target;
  cin>>target;    

  int answer=searching(arr,n,target);
  cout<<answer<<endl;

  return 0;
}