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
  int N,K; cin >> N >> K;
  rep(i,N) cin >> h[i];
  rep(i,100010) dp[i] = INF;
  dp[0] = 0;

  for(int i = 0; i < N; ++i){
    for(int j = 1; j <= K; ++j){
      chmin(dp[i+j], dp[i]+abs(h[i]-h[i+j]));
    }
  }

  cout << dp[N-1] << endl;
}
