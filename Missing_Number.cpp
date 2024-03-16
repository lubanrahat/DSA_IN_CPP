#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>

int findMissingNumbers(int arr[],int n) {
  int a=0;
  for(int i=1;i<=n;++i)
    a^=i;

  int b=0;
  for(int i=0;i<n-1;++i) 
    b^=arr[i];
  return a^b;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  std::cin>>n;

  int arr[n];
  for(int i=0;i<n;i++)
    std::cin>>arr[i];
  int answer = findMissingNumbers(arr,n);
  std::cout<<answer<<'\n';  

  return 0;
}