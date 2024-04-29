#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>
#include <sstream>
#include <iomanip>
using namespace std;

bool isPrime(int n) {
  if(n<2) return false;
  for(int i=2;i<n;i++) {
    if(n%i==0) {
      return false;
    }
  }
  return true;
}

int fact(int n) {
  int ans=1;
  for(int i=1;i<n;i++) {
    ans*=i;
  }
  return ans;
}

//Default parameter 
int sum(int a=50,int b=100) {
  return a+b;
}

void incerement(int &n) {
  n=100;
}

//Function Overloadding
void swap(int &a,int &b) {
  int temp=a;
  a=b;
  b=temp;
}
void swap(float &a,int &b) {
  float temp=a;
  a=b;
  b=temp;
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin>>n;

  if(isPrime(n)) {
    cout<<n<<" is prime numbers!\n";
  }else {
    cout<<n<<" is not prime numbers!\n";
  }

  cout<<n<<" fact is: "<<fact(n)<<endl;
  cout<<sum()<<endl;
  cout<<sum(1,30)<<endl;

  incerement(n);

  int s=10,f=20;
  swap(s,f);
  float x=23.45,y=12.45;

  return 0;
}