#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,X,Y; cin >> N >> X >> Y;
  int dp[N+1][N+1];
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      if(abs(i-j) == 1){
        dp[i][j] = 1;
      }
      else dp[i][j] = 2*10e3 + 1;
    }
  }
  dp[X][Y] = dp[Y][X] = 1;
  for (int k = 1; k <= N; k++){
    for (int i = 1; i <= N; i++) {
      for (int j = 1; j <= N; j++) {
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
  vector<int> ans(N);
  for(int i = 1; i <= N; ++i){
    for(int j = i+1; j <= N; ++j){
      if(dp[i][j] != 2*10e3 + 1) ans[dp[i][j]]++;
    }
  }
  for(int i = 1; i < N; ++i){
    cout << ans[i] << endl;
  }
  return 0;
}
