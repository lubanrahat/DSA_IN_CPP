#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int arr[] = {1,3,4,5,6},sum=0;
  int n = sizeof(arr)/sizeof(int);

  for(int i=0;i<n-1;i++) {
    sum+=arr[i];
  }

  int answer = (n*(n+1)/2)-sum;
  cout<<answer<<endl;

  return 0;
}