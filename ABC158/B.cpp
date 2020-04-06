#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  ll N,A,B; cin >> N >> A >> B;
  ll ans,tmp,tmp2;
  if(N%(A+B) > A) tmp = A;
  else tmp = N%(A+B);
  tmp2 = N/(A+B);
  ans = A*tmp2 + tmp;
  cout << ans << endl;
  return 0;
}
