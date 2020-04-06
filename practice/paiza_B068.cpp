#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int dh[8] = {0,-1,-1,-1,0,1,1,1}, dw[8] = {-1,-1,0,1,1,1,0,-1};

void DFS(vector<vector<bool> >& m,int N,int h, int w, int k, bool f, int idx){
  if(N <= h || h < 0 || N <= w || w < 0 || k <= 0) return 0;
  m[h][w] = true;
  if(k > 0){
    rep(i,8){
      if(i % 2 == 1) f = true;
      else f = false;
      if(!(i == idx && f == true)) k--;
      DFS(m,N,h+dh[i],w+dw[i],k,f,i);
      if(i == idx && f == true) k--;
      k++;
    }
  }
  return;
}

int main(){
  int N,H,W,K;
  cin >> N >> H >> W >> K;
  vector<vector<bool> > m(N,vector<bool>(N));
  int ans = 1; m[H-1][W-1] = true;
  int h = H-1,w = W-1,k = K;
  bool f = false;
  rep(i,8){
    h = H-1; w = W-1;
    if(i % 2 == 1) f = true;
    else f = false;
    DFS(m,N,h+dh[i],w+dw[i],k,f,i);
  }
  int a = 0;
  rep(i,N){
    rep(j,N){
      if(m[j][i] == true) a++;
    }
  }
  cout << a << endl;
  return 0;
}
