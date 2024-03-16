#include <bits/stdc++.h>
using namespace std;

bool isPegents(vector<int> vecInterger,int target) return binary_search(vecInterger.begin(),vecInterger.end(),target);

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> vecIntergers;

    cout<<"The vector contains the following sample value: ";
    for(int nCount = 25; nCount < 32; nCount++) {
        vecIntergers.push_back(nCount);
        cout<<nCount<<' ';
    }
    cout<<endl;

    vector<int>::iterator iElement;
    iElement = find_if(vecIntergers.begin(),vecIntergers.end(),IsMultiple <int> (4));
    if(iElement != vecIntergers.end()) {
        cout<<"The first element in the vector divisible by 4 id: ";
        cout<<*iElement<<endl;
    }

    return 0;
}