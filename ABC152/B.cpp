#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int a,b;
string str,str2;
int main(){
  cin >> a >> b;
  if(a < b) rep(i,b) cout << a;
  else rep(i,a) cout << b;
  cout << endl;
  return 0;
}
