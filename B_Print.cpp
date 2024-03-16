#include <iostream>
using namespace std;

void print(int n) {
  int i;
  for(i=1;i<=n;i++) {
    cout<<i<<" ";
  }
  if(i<=n)
    cout<<endl;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin>>n;
  cout<<"'";
  print(n);
  cout<<"'";
  cout<<endl;

  return 0;
}