#include <iostream>
using namespace std;

char convateUpperCase(char ch) {
  return (ch-'a'+'A');
}

bool isLowerCase(char ch) {
  if(ch>='a' && ch<='z') {
    return true;
  }
  return false;
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  char ch[] = {'a','b','C','D','e','f','S','W','a','j','n'};
  int n = sizeof(ch)/sizeof(char);

  for(int i=0;i<n;i++) {
    if(isLowerCase(ch[i])) {
      ch[i]=convateUpperCase(ch[i]);
    }
  }

  for(int i=0;i<n;i++) {
    cout<<ch[i]<<" ";
  }cout<<endl;

  return 0;
}