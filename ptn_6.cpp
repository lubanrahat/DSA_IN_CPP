#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    char ch = 'a';

    for(int row=1;row<=n;row++){
        for(int cal=1;cal<=n;cal++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
    cout<<endl;
    for(int row=1;row<=n;row++){
        for(int cal=1;cal<=n;cal++){
            cout<<char('a'+row-1)<<" ";
        }
        cout<<endl;
    }

    return 0;
}