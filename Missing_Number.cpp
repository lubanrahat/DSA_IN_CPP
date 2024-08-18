#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

int binary_search(int *arr,int n,int target) {
    int left = 0,right = n-1;
    while(left <= right) {
        int mid;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin>>tt;

    while(tt--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        sort(arr,arr+n);
        int cnt = 0,num;
        for(int i = 0; i < n; i++) {
            if(cnt != arr[i]) {
                num = arr[i];
                break;
            }
            cnt++;
        }
        cout<<num<<endl;
    }

    return 0;
}