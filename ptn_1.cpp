#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    
    for(int row=1;row<=n;row++){
        for(int cal=0;cal<=n;cal++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}