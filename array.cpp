#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
using namespace std;

int searchElement(int *arr,int n,int target) {
  for(int i=0;i<n;i++) {
    if(arr[i]==target) {
      return i;
    }
  }
  return -1;
}
void rotate_temp_left(int *arr,int n,int d) {
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
    arr[i]=temp[j];
}
void rotate_left(int arr[],int n,int d) {
  int q=1;
  while(q<=d) {
    int lastElement=arr[n-1];
    for(int i=0;i<n;i++) {
      arr[i]=arr[i+1];
    }
    arr[0]=lastElement;
    q++;
  }
}
void rotate_right(int arr[],int n,int d) {
  int q=1;
  while(q<=d) {
    int firstElement=arr[0];
    for(int i=n-1;i>=0;i--)
      arr[i]=arr[i-1];
    arr[n-1]=firstElement;
    q++;  
  }
}
int binary_search(int *arr,int n,int target) {
  int left=0,right=n-1;
  while(left<=right) {
    int mid=left+(right-left)/2;
    if(arr[mid]==target)
      return mid;
    else if(arr[mid]<target)
      left=mid+1;
    else
      right=mid-1;    
  }
  return -1;
}
void reverseArray(int *arr,int n) {
  int start=0,end=n-1;
  while(start<=end) {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void FindTheSecondLargestElement(int *arr,int n) {
  int first,second;
  first=second=INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]>first) {
      second=first;
      first=arr[i];
    }else if(arr[i]>second && arr[i]!=first) {
      second=arr[i];
    }
  }
  cout<<"First largest element: "<<first<<'\n';
  cout<<"Second largest elsement: "<<second<<'\n';
}
void FindTheThirdLargestElement(int *arr,int n) {
  int first,second,third;
  first=second=third=INT_MIN;
  for(int i=0;i<n;i++) {
    if(arr[i]>first) {
      third=second;
      second=first;
      first=arr[i];
    }else if(arr[i]>second && arr[i]!=first) {
      third=second;
      second=arr[i];
    }else if(arr[i]>third && arr[i]!=first && arr[i]!=second) {
      third=arr[i];
    }
  }
  cout<<"First largest element: "<<first<<'\n';
  cout<<"Second largest elsement: "<<second<<'\n';
  cout<<"Third largest element: "<<third<<'\n';
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int arr[] = {1,21,33,44,50,6,73,8,98,10,101};
  int n = sizeof(arr)/sizeof(int);

  FindTheSecondLargestElement(arr,n);
  cout<<endl;
  FindTheThirdLargestElement(arr,n);
  int target=10;
  if(searchElement(arr,n,target)!=-1) 
    cout<<target<<" is found "<<searchElement(arr,n,target)<<" index!\n";
  else
    cout<<target<<" is not found!\n";  

  return 0;
}