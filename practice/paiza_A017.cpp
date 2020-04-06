#include <iostream>
#include <vector>
using namespace std;

//Hは縦幅、Wは横幅、Nは入力
int H, W, N;

int main(){
  //入力
  cin >> H >> W >> N;

  //ブロックの情報
  //高さの情報h,幅の情報w,左端からの距離x
  vector<int> h(N),w(N),x(N);

  //ブロックがフィールドにあるかどうか
  vector<vector<bool> > blocks(H,vector<bool>(W));
  //各列にどれだけのブロックが積まれているか
  vector<int> count_h(W,0);
  //入力
  for(int i = 0; i < N; ++i) cin >> h[i] >> w[i] >> x[i];

  for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j) blocks[i][j] = false;

  for(int n = 0; n < N; ++n){
    int max_h = 0;
    for(int i = x[n]; i < x[n]+w[n]; ++i) if(max_h < count_h[i]) max_h = count_h[i];
    cout << "max_h" << max_h << endl;
    for(int j = x[n]; j < x[n]+w[n]; ++j){
      for(int i = 0; i < h[n]; ++i){
        if(!blocks[i+max_h][j]){
          blocks[i+max_h][j] = true;
        }
      }
      count_h[j] = max_h + h[n];
    }
    for(int i = 0; i < W; ++i) cout << "count_h[" << i << "] = " << count_h[i] << endl;
    cout << endl;
  }
  for(int i = H-1; i >= 0; --i){
    for(int j = 0; j < W; ++j){
      if(blocks[i][j]) cout << "#";
      else cout <<".";
    }
    cout << endl;
  }
  return 0;
}
