#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
using namespace std;

class Student {
  double id;
  public:
    Student(double id) {
      this->id=id;
    }
    int binary_search(int *arr,int n,int target) {
      int left=0;
      int right=n-1;
      while(left<=right) {
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
          return mid;
        else if(arr[mid],target)
          left=mid+1;
        else 
          right=mid-1;    
      }
      return -1;
    }
    void rotate_temp_left(int arr[],int n,int d) {
      int temp[n],j=0;
      for(int i=d;i<n;i++) {
        temp[j]=arr[i];
        j++;
      }
      for(int i=0;i<d;i++) {
        temp[j]=arr[i];
        j++;
      }
      for(int i=0;i<n;i++)
        arr[i]=temp[i];
    }
    bool isPrime(int N) {
      if(N==0||N==1) return false;
      for(int i=0;i<=sqrt(N);i++) 
        if(N%i==0)
          return false;
      return true;    
    }
    void rotate_left(int *arr,int n,int d) {
      int q=1;
      while(q<=d) {
        int firstElement=arr[n-1];
        for(int i=0;i<n;i++)
          arr[i]=arr[i+1];
        arr[0]=firstElement;
        q++;  
      } 
    }

};

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(int);

  cout<<sizeof(arr)<<endl;
  cout<<sizeof(int)<<endl;

  cout<<40/4<<endl;

  return 0;
}