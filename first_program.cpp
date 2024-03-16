#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {1,5,8,3,76,90,4,56,73,54,500,300,400,12,65,89,55};
    int n = sizeof(arr) / sizeof(int);

    int first,second,three;
    first = second = three = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            three = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            three = second;
            second = arr[i];
        }
        else if(arr[i] > three && arr[i] != first && arr[i] != second) {
            three = arr[i];
        }
    }

    cout<<"First Element: "<<first<<endl;
    cout<<"Second Element: "<<second<<endl;
    cout<<"Third Element: "<<three<<endl;

    return 0;
}