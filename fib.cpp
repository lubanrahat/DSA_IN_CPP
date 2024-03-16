#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int arr[1000];
  arr[0]=0;
  arr[1]=1; 

  for(int i=2;i<n-1;i++)
    arr[i]=arr[i-1]+arr[i-2];

  cout<<arr[n-1]<<endl;  

  return 0;
}