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

//input
int N;

ll a[100010][3];

ll dp[100010][3];

int main(){

  int N; cin >> N;

  rep(i,N) rep(j,3) cin >> a[i][j];

  rep(i,N){
    //i=0は夏休み始まってない
    rep(j,3){
      rep(k,3){
        if(j == k) continue;
        //i日目のkという行動と(i-2)日目にjという行動をした後に
        //kという行動をした際に得られた幸福度の比較
        chmax(dp[i+1][k],dp[i][j]+a[i][k]);
      }
    }
  }
  ll res = 0;
  rep(j,3) chmax(res,dp[N][j]);
  cout << res << endl;
}
