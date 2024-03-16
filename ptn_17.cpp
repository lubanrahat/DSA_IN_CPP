#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int tt;
    cin>>tt;

    while(tt--) {
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;
        int answer=binary_search(arr,n,target);
        if(answer!=-1){
            cout<<target<<" is found "<<answer<<" index!"<<endl;
        }
        else {
            cout<<target<<" is not found!"<<endl;
        }
    }

    return 0;
}