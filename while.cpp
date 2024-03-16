#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n=10,i=1;

    for(;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}