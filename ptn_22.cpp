#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int leftCal=1;leftCal<=row;leftCal++){
            cout<<"*";
        }
        for(int space=1;space<=2*n-2*row;space++){
            cout<<" ";
        }
        for(int rightCal=1;rightCal<=row;rightCal++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int row=n-1;row>=1;row--){
        for(int leftCal=1;leftCal<=row;leftCal++){
            cout<<"*";
        }
        for(int space=1;space<=2*n-2*row;space++){
            cout<<" ";
        }
        for(int rightCal=1;rightCal<=row;rightCal++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}