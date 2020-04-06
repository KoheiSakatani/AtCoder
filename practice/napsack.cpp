#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
typedef long long ll;

int n,W;
int weight[110],value[110];

int dp[110][10010];

int main(){
  cin >> n >> W;
  rep(i,n) cin >> value[i] >> weight[i];
  for(int w = 0; w <= W; ++w ) dp[0][w] = 0;
  //DPループ
  rep(i,n){
    for(int w = 0; w <= W; ++w){
      if(w >= weight[i]) dp[i+1][w] = max(dp[i][w-weight[i]]+value[i],dp[i][w]);
      else dp[i+1][w] = dp[i][w];
    }
  }
  cout << dp[n][W] << endl;
  return 0;

}
