#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,K; cin >> N >> K;
  vector<int> p(N);
  int idx[2];
  int t = 0;
  ll sum = 0;
  double ans = 0;
  rep(i,N){
    cin >> p[i];
    if(i == K-1){
      for(int j = 0; j < K; ++j) sum += p[j];
      if(t < sum){
        t = sum;
        idx[0] = 0;
        idx[1] = K-1;
      }
      sum -= p[0];
    }
    else if(i > K-1){
      sum += p[i];
      if(t < sum){
        t = sum;
        idx[0] = i-K+1;
        idx[1] = i;
      }
      sum -= p[i-K+1];
    }
  }
  for(int i = idx[0]; i <= idx[1]; ++i){
    int tmp = 0;
    rep(j,p[i]) tmp += j+1;
    ans += (double)tmp/(double)p[i];
  }
  cout << ans << endl;
  return 0;
}
