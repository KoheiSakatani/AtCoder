#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;
int main(){
  int N,K; cin >> N >> K;
  vector<vector<int> > a(N,vector<int>(N));
  vector<vector<int> > ans(N/K,vector<int>(N/K));
  rep(i,N){
    rep(j,N){
      cin >> a[j][i];
    }
  }
  int sum = 0,idx_c,idx_r = 1;
  for(int i = 0; i < N/K; ++i){
    idx_c = 1;
    for(int j = 0; j < N/K; ++j){
      sum = 0;

      for(int k = (idx_c-1) * K; k < idx_c * K; ++k){

        for(int l = (idx_r-1) * K; l < idx_r * K; ++l){
          sum += a[l][k];
        }
      }

      ans[j][i] = sum / (K*K);
      idx_c++;
    }
    idx_r++;
  }
  rep(i,N/K){
    rep(j,N/K){
      cout << ans[i][j];
      if(j != N/K) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
