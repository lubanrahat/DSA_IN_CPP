#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr,int n,int target){
    int left=1,right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<target) left=mid+1;
        else right=mid-1;
    }
    return -1;
}

bool isPrime(int n){
    if(n==0||n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==2){
            return false;
        }
    }
    return true;
}

void bubbleSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selectionSort(int *arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void rotate_temp_left(int *arr,int n,int d){
    int temp[n],j=0;
    for(int i=d;i<n;i++){
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<d;i++){
        temp[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}

int main()
{

    int tt;
    cin>>tt;

    while(tt--){
        int n;
        cin>>n;

        int arr = new int[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int target;
        cin>>target

        int answer = binary_search(arr,n,target);

        if(answer!=-1){
            cout<<target<<" is found "<<answer<<"\n";
        }
        else{
            cout<<target<<" not found!\n";
        }
    }

    return 0;
}