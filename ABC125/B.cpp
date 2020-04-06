#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

ll dp[50][1000];
ll N,sum_C = 0,m = 0;
ll C[100],V[100];

int main(){
  cin >> N;
  rep(i,N) cin >> V[i];
  rep(i,N){
    cin >> C[i];
    sum_C += C[i];
  }
  rep(i,1000) dp[0][i] = 0;
  //DP
  rep(i,N){
    for(int c = 0; c <= sum_C; ++c){
      if(c >= C[i]) dp[i+1][c] = max(dp[i][c-C[i]] + V[i],dp[i][c]);
      else dp[i+1][c] = dp[i][c];
    }
  }
  for(int i = 1; i <= sum_C; ++i){
    if(dp[N][i-1] == dp[N][i]) continue;
    if(m < dp[N][i] - i) m = dp[N][i] - i;
  }
  cout << m << endl;
  return 0;
}
