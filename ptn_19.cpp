#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int space=1;space<=n-row;space++)
           cout<<" ";
        for(int leftCal=1;leftCal<=row;leftCal++)
           cout<<"*";
        for(int rightCal=row-1;rightCal>=1;rightCal--)
           cout<<"*";
        cout<<endl;
    }

    return 0;
}