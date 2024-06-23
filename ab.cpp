#include <bits/stdc++.h>
using namespace std;
typedef long long i64;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define sz size
#define rep(i,n) for(int i=0;i<n;i++)

int main()
{

  ios::sync_with_stdio(false);
  cin.tie(0);

  int tt;
  cin>>tt;
  rep(i,tt) {
    int n;
    cin>>n;
    vi v(n);
    rep(i,n) cin>>v[i];
    rep(i,n) cout<<v[i]<<" ";
    cout<<endl;
  }

  return 0;
}