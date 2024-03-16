#include <iostream>
using namespace std;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,even=0,odd=0,positive=0,negative=0; 
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++) {

    if(arr[i]%2==0) even++;
    else odd++;
    if(arr[i]>0) {
      positive++;
    }  
    else if(arr[i]<0 && arr[i]!=0) {
      negative++;
    }
  }
  
  cout<<"Even: "<<even<<endl;
  cout<<"Odd: "<<odd<<endl;
  cout<<"Positive: "<<positive<<endl;
  cout<<"Negative: "<<negative<<endl;
            
  return 0;
}