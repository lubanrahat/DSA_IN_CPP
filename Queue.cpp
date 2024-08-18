#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <array>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long i64;
typedef unsigned long ul;
#define PI 3.1415926535897932384626
#define rep(i,n) for(int i = 0;i < n;i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)

int main() {
    
    queue<int> q;

    q.push(100);
    q.push(34);
    q.push(56);
    q.push(23);
    q.push(56);
    q.push(12);
    q.push(89);

    int k = 3;
    stack<int> st;

    for(int i=1;i<=k;i++) {
        // cout<<q.front()<<endl;
        st.push(q.front());
        q.pop();
    }

    int n = q.size();

    for(int i=1;i<=k;i++) {
        q.push(st.top());
        st.pop();
    }

    
    while(n--) {
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()) {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}