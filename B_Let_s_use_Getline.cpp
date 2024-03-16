#include <iostream>
using namespace std;

void printUntilBackslash(const string& s) {
  for(char c:s) {
    if(c=='\\') {
      break;
    }
    cout<<c;
  }
}

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  getline(cin,s);

  printUntilBackslash(s);
  cout<<endl;

  return 0;
}