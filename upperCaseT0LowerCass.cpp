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

char convert(char ch) {
  return ch-'a'+'A';
}

int main()
{

  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  char ch;
  cin>>ch;

  cout<<convert(ch)<<endl;

  return 0;
}