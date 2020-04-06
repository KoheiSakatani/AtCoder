#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

int main(){
  //グリッドH*Wの初期位置を(h0,w0)とする
  int H,W,h0,w0;
  //左から,北,東,南,西
  int dh[4] = {-1,0,1,0}, dw[4] = {0,1,0,-1};

  //入力
  cin >> H >> W;
  cin >> h0 >> w0;
  //インデックスは0-based
  h0--; w0--;
  //家の状態を入力
  char s[H][W];
  rep(i,H) rep(j,W) cin >> s[i][j];

cout << endl;
  int h = h0, w = w0;
  int d = 0; //最初の向きは北
  //町を出るまで処理を行う
  while((0 <= h && h < H) && (0 <= w && w < W) ){
    cout << "h = " << h << "w = " << w << endl;
    if(s[h][w] == '*'){
      s[h][w] = '.';
      d--;
      if(d < 0) d = 3;
      h += dh[d]; w += dw[d];
    }
    else if(s[h][w] == '.'){
      s[h][w] = '*';
      d++;
      if(d > 3) d = 0;
      h += dh[d]; w += dw[d];
    }
  }
  rep(i,H){
    rep(j,W){
      cout << s[i][j];
    }
    cout << endl;
  }
  return 0;
}
