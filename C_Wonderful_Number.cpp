#include <iostream>
using namespace std;

int convateDecimalToBinary(int n) {
  int binary=0,mul=1;
  while(n!=0) {
    int digit=n%2;
    binary=digit*mul+binary;
    mul*=10;
    n/=2;
  }
  return binary;
}

bool isPalindrome(int n) {
  int num=n,answer=0;
  while(num!=0) {
    int digit=num%10;
    answer=answer*10+digit;
    num/=10;
  }
  if(n!=answer) return true;
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  if(n&1 && isPalindrome(convateDecimalToBinary(n))) {
    cout<<"YES"<<endl;
  }else {
    cout<<"NO"<<endl;
  }

  return 0;
}