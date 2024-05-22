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

void selectionSort(int *arr,int n) {
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[i]>arr[j]) {
        swap(arr[i],arr[j]);
      }
    }
  }
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) 
    cin>>arr[i];
  selectionSort(arr,n);
  for(int i=0;i<n;i++) 
    cout<<arr[i]<<" ";  
  cout<<"\n";  

  return 0;
}