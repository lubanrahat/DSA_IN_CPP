#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;

  while(tt--) {
    int n;
    cin>>n;
    long long factorial=1;
    for(int i=1;i<=n;i++)
      factorial*=i;
    cout<<factorial<<endl;  
  }

  return 0;
}