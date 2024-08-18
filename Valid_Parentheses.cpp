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

bool validParentheses(string str) {
    stack<char> st;
    for(int i=0;i<str.size();i++) {
        if(str[i] == '(') {
            st.push(str[i]);
        }else {
            if(st.empty()) {
                return false;
            }else {
                st.pop();
            }
        }
    }

    return st.empty();
}

int main() {
    
    string str = "((()))()(";

    if(validParentheses(str)) {
        cout<<"YES\n";
    }else {
        cout<<"NO\n";
    }
    
    return 0;
}