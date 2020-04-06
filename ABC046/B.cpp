#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,K; cin >> N >> K;
  ll ans = K * pow(K-1,N-1);
  //左端を塗ったら次に塗るのは前に塗った色以外の(K-1)色のうちどれか
  //これを(N-1)個分行う?
  cout << ans << endl;
  return 0;
}
