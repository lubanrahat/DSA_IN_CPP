#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(8);
    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }

    stack<int> s;

    while(!s.empty()) {
        s.push(st.top());
        s.pop();
    }

    while(!s.empty()) {
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}