#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int topCal=1;topCal<=row;topCal++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=1;row<=n;row++){
        for(int endCal=n-1;endCal>=row;endCal--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}