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

void printArray(int *arr,int n) {
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;  
}
void bubbleSort(int *arr,int n) {
  bool swapped;
  for(int i=0;i<n-1;i++) {
    swapped=false;
    for(int j=0;j<n-i-1;j++) {
      if(arr[j]>arr[j+1]) {
        swap(arr[j],arr[j+1]);
        swapped=true;
      }
    }
    if(swapped==false) break;
  }
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  cout<<"Print Befor Array: ";
  printArray(arr,n);
  bubbleSort(arr,n);
  cout<<"Print After Sorted Array: ";
  printArray(arr,n);  

  return 0;
}