#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> v = {1,2,3,4,5,6,7,2,8,9,2};
  int target;
  cin>>target;

  auto it = find(v.begin(),v.end(),target);
  if(it != v.end()) {
    replace(v.begin(),v.end(),target,99999);
  } 
  else {
    cout<<"Not found!"<<endl;
  } 

  for(auto it = v.begin(); it < v.end();it++) cout<<*it<<" ";
  cout<<endl;

  return 0;
}