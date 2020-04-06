#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N, S, T, W; cin >> N >> S >> T;
  int A[N], ans = 0;
  cin >> W;
  A[0] = 0;
  for(int i = 1; i < N; ++i) cin >> A[i];
  rep(i,N){
    W += A[i];
    if(S <= W && W <= T) ans++;
  }
  cout << ans << endl;
  return 0;
}
