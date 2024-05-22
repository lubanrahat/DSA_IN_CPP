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
#define ll long long

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int tt;
  cin>>tt;

  while(tt--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
      cin>>arr[i];
    bool flag = true;  
    for(int i=0;i<n-1;i++) {
      if(arr[i]>arr[i+1]) {
        flag = false;
        break;
      }
    } 

    if(flag) cout<<"YES\n";
    else cout<<"NO\n"; 

  }

  return 0;
}