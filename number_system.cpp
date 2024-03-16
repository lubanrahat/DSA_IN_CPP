#include <iostream>
using namespace std;

int binary_decimal(int binary) {
  int answer = 0,digit = 0,mul = 1;
  while(binary != 0) {
    digit = binary%10;
    answer = digit*mul+answer;
    mul/=2;
    binary/=10;
  }
  return answer;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,answer = 0,mul = 1;
  cin>>n;

  while(n!=0) {
    int dight = n&1;
    answer = dight*mul+answer;
    mul*=10;
    n = n>>1;
  }

  cout<<answer<<endl;

  cout<<binary_decimal(101)<<endl;

  return 0;
}