#include <iostream>
using namespace std;

int main(){
  int H,W; cin >> H >> W;
  int a[H][W];
  int x1,x2,x3,x4; cin >> a[0][0] >> a[0][1] >> a[1][0] >> a[1][1];

  for(int i = 0; i < 2; ++i){
    for(int j = 2; j < W; ++j){
      a[i][j] = a[i][j-1] + (a[i][1] - a[i][0]);
      cout << "a[" << i << "][" << j <<"] = " << a[i][j] << endl;
    }
  }
  for(int i = 2; i < H; ++i){
    a[i][0] = a[i-1][0] + (a[1][0] - a[0][0]);
    for(int j = 1; j < W; ++j){
      a[i][j] = a[i-1][j] + (a[1][j] - a[0][j]);
    }
  }



  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      cout << a[i][j];
      if(j != W-1) cout << " ";
      else cout << endl;
    }
  }

  return 0;
}
