#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <array>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long i64;
typedef unsigned long ul;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0;i < n;i++)
#define tr(it,a) for (auto it = a.begin(); it != a.end(); it++)

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin>>n;

    for(int i = 0; i < n; i++) {
        int j = i;
        while(j < n) {
            if(arr[i] > arr[j]) {
                cout<<"Array is not sorted!"<<endl;
                return 0;
            }
        } 
    }

    int *arr = new int(n);
    rep(i,n) cin>>arr[i];

    int left = 0,right = n-1;
    int target,answer = -1;
    cin>>target;

    while(left <= right) {
        int mid = left + (right-left) / 2;
        if(arr[mid] == target) answer = mid;
        else right = mid+1;
    }

    if(answer != -1) {
        cout<<target<<" is found "<<answer<<" index!"<<endl;
    } else {
        cout<<target<<" is not found"<<endl;
    }

    
    
    return 0;
}