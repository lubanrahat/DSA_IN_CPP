#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if(n==0||n==1) return false;
  for(int i=2;i<sqrt(n);i++) {
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

  for(int i=1;i<=n;i++) {
    if(isPrime(i)) {
      cout<<i<<" ";
    }
  }
  cout<<endl;

  return 0;
}