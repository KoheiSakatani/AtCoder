#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
typedef long long ll;

int n,A;
int a[110];

bool dp[110][10010];

int main(){
  cin >> n >> A;
  rep(i,n) cin >> a[i];

  memset(dp,0,sizeof(dp));
  dp[0][0] = true;
  //idxを入力された数字として使う
  //dp[0][0]になったらTrue,即ちAを満たす数値の組合せが存在する
  for(int j = 0; j <= A; ++j) cout << "dp[0" << "][" << j << "] = " << dp[0][j] << endl;
  rep(i,n){
    for(int j = 0; j <= A; ++j){
      dp[i+1][j] |= dp[i][j]; //dp[i][j]がtrueならdp[i+1][j]もtrue
      if(j >= a[i]){
        dp[i+1][j] |= dp[i][j-a[i]];
        cout << "dp[" << i+1 << "][" << j << "] |= dp[" << i << "][" << j << "-" << a[i] << "] = " << dp[i+1][j] << endl;
      }
      cout << "dp[" << i+1 << "][" << j << "] = " << dp[i+1][j] << endl;
    }
  }
  if(dp[n][A]) cout << "YES" << endl;
  else cout << "NO" << endl;
}
