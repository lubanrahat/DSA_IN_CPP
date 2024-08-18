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

bool isValidPassword(string password) {
    if(password.size() < 6 && password.size() <= 20) {
        return false;
    }
    int capital = 0,small = 0,special = 0,digit = 0;
    for(int i = 0; i < password.size(); i++) {
        if(password[i] >= 'A' && password[i] <= 'Z') capital++;
        else if(password[i] >= 'a' && password[i] <= 'z') small++;
        else if(password[i] >= '0' && password[i] <= '9') digit++;
        else special++;
    }
    cout<<capital<<" "<<small<<" "<<special<<" "<<digit<<endl;
    if(capital != 0 && small != 0 && special != 0 && digit != 0) {
        return true;
    }
    return false;
}


int main() {
    
    string password;
    cin>>password;

    if(isValidPassword(password)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    
    return 0;
}