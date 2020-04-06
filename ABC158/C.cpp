#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int A,B; cin >> A >> B;
  double tmp = A / 0.08, tmp2 = B/0.1;
  //cout << tmp << " " << tmp2 << endl;
  int m;
  if(floor(tmp) < floor(tmp2)) m = floor(tmp2);
  else m = floor(tmp);
  int ans = floor(m*0.08), ans2 = floor(m*0.1);
  if(ans == A && ans2 == B) cout << m << endl;
  else cout << -1 << endl;
  return 0;
}
