#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int cur,prv,last;
    prv = 0;
    last = 1;

    for(int i = 0; i < n; i++) {
        cur = prv+last;
        last = prv;
        prv = cur;
    }

    cout<<cur<<endl;

    return 0;
}