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
    int count[26] = {0};
    for(int i=0;i<s.size();i++) {
      count[int(s[i]-97)]++;
    }

    for(int i=0;i<26;i++) {
      if(count[i]>0)
        cout<<char(s[i]+97)<<" = "<<count[i]<<endl;
    }
    cout<<endl;
  }

  return 0;
}