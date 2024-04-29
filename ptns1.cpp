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

  int n;
  cin>>n;

  int i = 1;

  while(i<=n) {
    int j=1;
    while(j<=n) {
      cout<<"*";
      j++;
    }
    cout<<endl;
    i++;
  }

  return 0;
}