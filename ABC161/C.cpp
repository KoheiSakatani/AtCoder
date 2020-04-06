#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  ll N,K,ans = 0; cin >> N >> K;
  ll r = N % K;
  if(r == 0) ans = 0;
  else ans = min(r,abs(r-K));
  cout << ans << endl;
  return 0;
}
