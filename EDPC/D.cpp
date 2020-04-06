#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

typedef long long ll; //longlong型をllと省略

//最大値を求めるテンプレ
template<class T> inline bool chmax(T& a, T b){
  if(a < b){
    a = b;
    return 1;
  }
  return 0;
}

//最小値を求めるテンプレ
template<class T> inline bool chmin(T& a, T b){
  if(a > b){
    a = b;
    return 1;
  }
  return 0;
}

int N,W;

ll weight[100010];
ll value[100010];

ll dp[110][100100] = {0};
int main(){
  cin >> N >> W;
  rep(i,N) cin >> weight[i] >> value[i];

  for(int i = 0; i <= W; ++i) dp[0][i] = 0;

  rep(i,N){
    for(int w = 0; w <= W; ++w){
      if(w-weight[i] >= 0) chmax(dp[i+1][w],dp[i][w-weight[i]]+value[i]);
      chmax(dp[i+1][w],dp[i][w]);
    }
  }
  cout << dp[N][W] << endl;
  return 0;
}
