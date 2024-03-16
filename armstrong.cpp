#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int n) {
  int cnt=0;
  while(n!=0) {
    cnt++;
    n/=10;
  }
  return cnt;
}

bool isArmstrong(int n,int numberOfDigit) {
  int num=n,ans=0;
  while(n!=0) {
    int digit=n%10;
    ans+=pow(digit,numberOfDigit);
    n/=10;
  }
  if(ans==num) 
    return true;
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  if(isArmstrong(n,countDigit(n))) {
    cout<<"YES"<<endl;
  }else {
    cout<<"NO"<<endl;
  }
  

  return 0;
}