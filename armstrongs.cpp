#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;

int countDigit(int n) {
  int cnt=0;
  while(n>0) {
    cnt++;
    n/=10;
  }
  return cnt;
}

bool isArmstrongNumbers(int n) {
  int x=n,answer=0;
  while(x>0) {
    int digit=x%10;
    answer+=pow(digit,countDigit(n));
    x/=10;
  }
  if(answer==n)
    return true;
  return false;  
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  if(isArmstrongNumbers(n)) {
    cout<<n<<" is Armstrong Numbers!\n";
  }else {
    cout<<n<<" is not Armstrong Numbers!\n";
  }

  return 0;
}