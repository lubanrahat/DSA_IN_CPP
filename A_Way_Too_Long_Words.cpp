#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;

  while(tt--) {
    string S;
    cin>>S;

    if(S.size()<=10) {
      cout<<S<<endl;
    }else {
      cout<<S[0]<<S.size()-2<<S[S.size()-1]<<endl;
    }
  }

  return 0;
}