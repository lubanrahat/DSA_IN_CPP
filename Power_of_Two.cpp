#include <iostream>
#include <cmath>
using namespace std;

bool powerOfTwo(int n) {
  if(n<1) return false;
  while(n!=1) {
    if(n%2==1) {
      return false;
    }
    n/=2;
  }
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  if(powerOfTwo(n)) {
    cout<<"True!"<<endl;
  }else {
    cout<<"False!"<<endl;
  }

  return 0;
}