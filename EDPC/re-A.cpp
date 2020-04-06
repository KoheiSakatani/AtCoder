#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int h[100010];

int dp[100010];
int N;
int main(){
  cin >> N;
  rep(i,N) cin >> h[i];
  rep(i,N) dp[i] = INF;
  dp[0] = 0;
  for(int i = 1; i < N; ++i){
    dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i]);
    if(i > 1) dp[i] = min(dp[i]+abs(h[i]-h[i-2]),dp[i]);
  }
  cout << dp[N-1] << endl;
  return 0;
}
