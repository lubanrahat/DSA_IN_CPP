#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int cal=1;cal<=n-row+1;cal++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    int i=1;
    while(i<=n){
        int j = n;
        while(j>=i) {
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}