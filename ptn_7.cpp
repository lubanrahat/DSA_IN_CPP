#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        for(int cal=1;cal<=n;cal++){
            cout<<char('a'+cal-1)<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    for(int row=1;row<=n;row++){
        for(char cal='a';cal<='e';cal++){
            cout<<cal<<" ";
        }
        cout<<endl;
    }

    return 0;
}