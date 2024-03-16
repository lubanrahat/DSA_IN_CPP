#include <iostream>
using namespace std;

int trailing_zeroes_in_factorial(int n) {
  int cnt=0;
  while(n>=5) {
    cnt+=n/5;
    n/=5;
  }
  return cnt;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;

  while(tt--) {
    int n;
    cin>>n;

    cout<<trailing_zeroes_in_factorial(n)<<endl;
  }

  return 0;
}