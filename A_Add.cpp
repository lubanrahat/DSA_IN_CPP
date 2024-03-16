#include <iostream>
using namespace std;

int summation(int a,int b) {
  return a+b;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int a,b;
  cin>>a>>b;

  int answer=summation(a,b);
  cout<<answer<<endl;

  return 0;
}