#include <bits/stdc++.h>
using namespace std;

class Student {
    
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    int cnt = 1;

    for(int row=1;row<=n;row++){
        for(int cal=1;cal<=n;cal++) {
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }

    return 0;
}