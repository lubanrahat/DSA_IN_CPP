#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  int arr[n];
  long long sum=0;
  for(int i=0;i<n;i++) {
    cin>>arr[i];
    sum+=arr[i];
  }

  cout<<abs(sum)<<endl;

  return 0;
}