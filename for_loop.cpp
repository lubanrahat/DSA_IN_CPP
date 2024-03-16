#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
            break;
        }
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {1,2,3,4,5,7,2};
    int n = sizeof(arr)/sizeof(int);

    if(isSorted(arr,n)) {
        cout<<"Array is sorted!"<<endl;
    }
    else {
        cout<<"Array is not sorted!"<<endl;
    }

    int n;
    cin >> n;
    int fact = 1;

    for(int i = 1; i < n; i++) {
        fact *= i;
    }
    cout<<fact<<endl;

    return 0;
}