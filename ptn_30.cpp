#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int space=1;space<=row-1;space++){
            cout<<" ";
        }
        for(int cal=1;cal<=n-row+1;cal++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}