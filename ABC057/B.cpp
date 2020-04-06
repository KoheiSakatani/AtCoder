#include <bits/stdc++.h>
#include <stack>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,M; cin >> N >> M;
  vector<int> a(N),b(N),c(M),d(M);
  rep(i,N) cin >> a[i] >> b[i];
  rep(i,M) cin >> c[i] >> d[i];
  rep(i,N){
    int checkpoint;
    ll m = INF;
    rep(j,M){
      int dist = abs(a[i]-c[j])+abs(b[i]-d[j]);
      if(m > dist){
        m = dist;
        checkpoint = j+1;
      }
    }
    cout << checkpoint << endl;
  }
  return 0;
}
