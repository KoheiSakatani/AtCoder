#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

template<class T> inline bool chmax(T& a, T b){
  if(a < b){
    a = b;
    return 1;
  }
  return 0;
}

template<class T> inline bool chmin(T& a, T b){
  if(a > b){
    a = b;
    return 1;
  }
  return 0;
}

const long long INF = 1LL << 60;

int N;
long long h[100010];

long long dp[100010];

int main(){
  int N; cin >> N;
  rep(i,N) cin >> h[i];
  rep(i,100010) dp[i] = INF;
  dp[0] = 0;

  for(int i = 1; i < N; ++i){
    chmin(dp[i], dp[i-1]+abs(h[i]-h[i-1]));
    if(i > 1) chmin(dp[i], dp[i-2]+abs(h[i] - h[i-2]));
  }

  cout << dp[N-1] << endl;
}
