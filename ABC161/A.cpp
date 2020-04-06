#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int X,Y,Z; cin >> X >> Y >> Z;
  int tmp = X;
  X = Y;
  Y = tmp;
  tmp = X;
  X = Z;
  Z = tmp;
  cout << X << " " << Y << " " << Z << endl;

  return 0;
}
