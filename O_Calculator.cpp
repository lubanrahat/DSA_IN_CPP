#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int a,b,answer;
  char ch;
  cin>>a>>ch>>b;

  switch (ch)
  {
  case '+':
    answer=a+b;
    break;
  case '-':
    answer=a-b;
    break;
  case '/':
    answer=a/b;
    break;
  case '*':
    answer=a*b;
    break;      
  default:
    break;
  }

  cout<<answer<<endl;

  return 0;
}