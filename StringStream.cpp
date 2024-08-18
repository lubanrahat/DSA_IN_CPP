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
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int binary_search(int *arr,int n,int target) {
    int left = 0,right = n-1;
    while(left <= right) {
        int mid = left + (right-left) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            left = mid = mid+1;
        } else {
            right = mid-1;
        }
    }
    return -1;
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int Q;
    cin >> Q;

    rep(i,Q) {
        int n;
        cin>>n;
        int *arr = new int(n);
        rep(i,n) cin>>arr[i];
    }
    
    return 0;
}