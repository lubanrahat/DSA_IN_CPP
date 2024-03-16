#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;

  int i=1;

  while(i<=n) {
    int j=1;
    while(j<=i) {
      cout<<"*";
      j++;
    }
    cout<<" ";
    i++;
  }cout<<endl;

  return 0;
}