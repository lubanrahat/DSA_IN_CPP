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

  int n = 5;
  int arr[n] = {1,2,3,5};

  int sum = n*(n+1)/2;
  int sumOfArray = 0;

  for(int i=0;i<n-1;i++) {
    sumOfArray+=arr[i];
  }

  cout<<sum-sumOfArray<<endl;

  return 0;
}