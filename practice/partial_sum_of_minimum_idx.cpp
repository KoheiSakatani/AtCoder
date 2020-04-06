#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;

const int INF = 1<<29;
typedef long long ll;

//入力
int n,A;
int a[110];
//dpテーブルの使い方をちゃんと考えられれば十分立ち回れる
int dp[110][10010];

int main(){
  cin >> n >> A;
  for(int i = 0; i < n; ++i) cin >> a[i];

  for(int i = 0; i < 110; ++i) for(int j = 0; j < 10010; ++j) dp[i][j] = INF;
  dp[0][0] = 0;

  for(int i = 0; i < n; ++i){
    for(int j = 0; j <= A; ++j){
      dp[i+1][j] = min(dp[i+1][j],dp[i][j]);
      if(j >= a[i]) dp[i+1][j] = min(dp[i+1][j],dp[i][j-a[i]]+1);
    }
  }
  if(dp[n][A] < INF) cout << dp[n][A] << endl;
  else cout << "-1" << endl;
  return 0;
}
