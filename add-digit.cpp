#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin>>n;

  while(n > 9) {
    int answer=0;
    while(n!=0){
      int digit=n%10;
      answer+=digit;
      n/=10;
    }
    n=answer;
  }

  cout<<n<<endl;

  return 0;
}