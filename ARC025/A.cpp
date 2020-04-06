#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int J[7],D[7];
  int ans = 0;
  rep(d,7) cin >> D[d];
  rep(d,7) cin >> J[d];
  rep(d,7){
    if(D[d] < J[d]) ans += J[d];
    else ans += D[d];
  }
  cout << ans << endl;
  return 0;
}
