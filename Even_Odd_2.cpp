#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;
  while(tt--) {
    string s;
    cin>>s;
    if(s[s.size()-1]%2==0) cout<<"even\n";
    else cout<<"odd\n";
  }

  return 0;
}