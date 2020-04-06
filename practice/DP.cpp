#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
typedef long long ll;
int N;
int a[10010];

int dp[10010];
int main(){
  cin >> N;
  rep(i,N) cin >> a[i];
  dp[0] = 0;
  rep(i,N) dp[i+1] = max(dp[i],dp[i]+a[i+1]);
  cout << dp[N] << endl;
  return 0;
}
