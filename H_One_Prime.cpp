#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if(n==0||n==1) return false;
  for(int i=2;i<=sqrt(n);i++) {
    if(n%i==0) {
      return false;
    }
  }
  return true;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  if(isPrime(n)) {
    cout<<"YES"<<endl;
  }
  else {
    cout<<"NO"<<endl;
  }

  return 0;
}