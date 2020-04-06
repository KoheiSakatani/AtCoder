#include <iostream>
using namespace std;



int main(){
  int N,H,W; cin >> N >> H >> W;
  int sx, sy; cin >> sy >> sx;
  string s; cin >> s;
  int g[H][W];for(int i = 0; i < H; ++i) for(int j = 0; j < W; ++j) g[i][j] = 0;
  int front = 4,right = 3;
  //ダイスの目の正面と右隣を配列要素として接地目を格納
  int dice[6][6] = {{0,4,2,5,3,0},{3,0,6,1,0,4},{5,1,0,0,6,2},{2,6,0,0,1,5},{4,0,1,6,0,3},{0,3,5,2,4,0}};

  g[--sy][--sx] = dice[front][right];
    cout << "g[" << sy << "][" << sx << "] = " << g[sy][sx] << endl;
    cout << "dice[" << front+1 << "][" << right+1 << "] = " << dice[front][right] << endl;
  for(int n = 0; n < N; ++n){
    if(s[n] == 'D'){
      front = 7 - dice[front][right]-1;
      g[++sy][sx] = dice[front][right];
    }
    else if(s[n] == 'U'){
      front = dice[front][right]-1;
      g[--sy][sx] = dice[front][right];
    }
    else if(s[n] == 'R'){
      right = 7 - dice[front][right]-1;
      g[sy][++sx] = dice[front][right];
    }
    else if(s[n] == 'L'){
      right = dice[front][right]-1;
      g[sy][--sx] = dice[front][right];
    }
    cout << "g[" << sy << "][" << sx << "] = " << g[sy][sx] << endl;
    cout << "dice[" << front+1 << "][" << right+1 << "] = " << dice[front][right] << endl;

  }
  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      cout << g[i][j];
      if(j != W-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
