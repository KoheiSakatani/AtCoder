#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  ll N, A, B; cin >> N >> A >> B;
  ll ans;
  if((N == 1 && B-A > 1) || A > B) ans = 0;
  else if(A == B) ans = 1;
  else ans = (N-2)*(B-A) + 1;
  cout << ans << endl;
  return 0;
}
