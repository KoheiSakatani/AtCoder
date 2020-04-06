#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int X; cin >> X;
  int ans = 0;
  ans += 1000 * (X / 500);
  X %= 500;
  ans += 5 * (X / 5);
  cout << ans << endl;
  return 0;
}
