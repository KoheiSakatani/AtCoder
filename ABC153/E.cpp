#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

//dpテーブル
ll dp[10010][10010];

ll H,N,A[10000],B[10000];
int main(){
  cin >> H >> N;
  rep(i,N) cin >> A[i] >> B[i];
  dp[0][0] = 0; dp[1][0] = 0;
  for(int j = 0; j < N; ++j) dp[0][j] = INF;
  rep(h,H){
    rep(n,N){
      if(h <= A[n]) dp[h+1][n] = dp[h][n];
      else dp[h+1][n] = min(dp[h][n], dp[h+1][h-A[n]] + B[n]);
    }
  }
  ll m = INF;
  rep(i,N){
    if(m > dp[H][i]) m = dp[H][i];
  }
  cout << m << endl;
  /*for(int i = 0; i <= H; ++i){ dp[0][i] = INF; dp[1][i] = INF; }
  ll r = H/m;
  if(H % m != 0) r++;
  rep(i,N){
    for(int j = 0; j <= H; ++j){
      if(j <= A[i]){
        dp[1][j] = min(dp[1][j],B[i]);
      }
    }
  }
  ll m = dp[1][H];
  for(int i = 1; i <= r; ++i){
    rep(j,N){
      for(int k = 0; k <= H; ++k){
        if(H <= k + A[j]){
          m = dp[i][k] + B[j];
          dp[i+1][H] = min(dp[i][H],m);
        }else{
          dp[i+1][k + A[j]] = min(dp[i][k+A[j]], dp[i][k] + B[j]);
        }
      }
    }
  }
  for(int i = 0; i <= r; ++i){
    for(int j =0; j <= H; ++j){
      cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;
    }
  }
  cout << m << endl;*/
  return 0;
}
