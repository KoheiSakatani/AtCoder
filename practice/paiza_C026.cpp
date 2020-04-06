#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,S,p,ans = 0, ans_m = 0; cin >> N >> S >> p;
  vector<int> m(N), s(N);
  rep(i,N){
    cin >> m[i] >> s[i];
    if((S+p >= s[i] && S-p <= s[i]) && ans_m < m[i]){
      ans_m = m[i];
      ans = i+1;
    }
  }
  if(ans == 0) cout << "not found" << endl;
  else cout << ans << endl;
  return 0;
}
