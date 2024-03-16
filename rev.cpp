#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include<climits>
#include<map>
#include <set>
#include<utility>

#define MAX_LEN 20
#define EMPTY_VALUE -1
int mem[MAX_LEN][MAX_LEN];

int lcs(int i,int j,std::string &S,std::string &W) {
  if(i==S.size() || j==W.size())
    return 0;
  if(mem[i][j]!=EMPTY_VALUE) 
    return mem[i][j]; 
  int ans=0;
  if(S[i]==W[j]) {
    ans=1+lcs(i+1,j+1,S,W);
  }else {
    int val1=lcs(i+1,j,S,W);
    int val2=lcs(i,j+1,S,W);
    ans=std::max(val1,val2);
  }
  mem[i][j]=ans;
  return mem[i][j];
}

std::string reverseWord(std::string str) {
  std::string ans;
  for(int i=str.size()-1;i>=0;i--) {
    ans+=str[i];
  }
  return ans;
}

void reversr(int *arr,int n) {
  int s=0,e=n-1;
  while(s<=e) {
    std::swap(arr[s],arr[e]);
  }
}

void compress() {
  std::map<int,int> mymap;
  int input[] = {
    -102,
    134565589,
    134565589,
    -102,
    66666668,
    134565589,
    66666668,
    -102,
    1,
    -2
  };
  int assign=0,commpressed[100],c=0,n=sizeof(input)/sizeof(int);
  for(int i=0;i<n;i++) {
    int x=input[i];
    if(mymap.find(x)==mymap.end()) {
      mymap[x]=assign;
      std::cout<<"Mapping "<<x<<" with "<<assign<<"\n";
      assign++;
    }
    x=mymap[x];
    commpressed[c++]=x;
  }
  std::cout<<"Compressed array: ";
  for(int i=0;i<n;i++)
    std::cout<<commpressed[i]<<" ";
  std::cout<<'\n';  
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  std::cout<<reverseWord("for")<<'\n';

  return 0;
}