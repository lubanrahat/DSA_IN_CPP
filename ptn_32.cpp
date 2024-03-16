#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=n-1;row>=1;row--){
        for(int space=1;space<=n-row;space++){
            cout<<"*";
        }
        for(int cal=1;cal<=2*row-1;cal++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}