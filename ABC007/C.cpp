#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
const int INF = 1<<29;

//typedefでpairを使いやすく
typedef pair<int, int> P;

//Rは列数、Cは行数
int R,C;
//sx,syはスタート地点の座標、gx,gyはゴール地点の座標
int sx,sy,gx,gy;

int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
//変数は関数外に書いた方が見やすい
/*char g[1010][1010];
int dist[1010][1010];*/

int main(){
  cin >> R >> C;
  cin >> sy >> sx;
  cin >> gy >> gx;
  sy--; sx--; gy--; gx--;
  queue<P> que;
  vector<vector<char> > c(R,vector<char>(C));
  vector<vector<int> > d(R,vector<int>(C));
  for(int i = 0; i < R; ++i){
    for(int j = 0; j < C; ++j){
      cin >> c[i][j];
    }
  }
  /*cout << "ゴールは(" << gy << "," << gx << ")です" << endl;
  c[gy][gx] = '*';
  cout << "c[" << gy << "][" << gx << "] = " << c[gy][gx] << endl;
  for(int i = 0; i < R; ++i){
    for(int j = 0; j < C; ++j){
      cout << c[i][j];
    }
    cout << endl;
  }*/
  for(int i = 0; i < R; ++i){
    for(int j = 0; j < C; ++j){
      d[i][j] = INF;
    }
  }
  //スタート地点の座標をqueueにpush
  que.push(P(sy,sx));
  d[sy][sx] = 0;

  while(!que.empty()){
    P p = que.front(); que.pop();
    //cout << "(" << p.first << "," << p.second << ")から" << endl;
    if((p.first == gy) && (p.second == gx)){
      cout << d[gy][gx] << endl;
      return 0;
    }
    for(int i = 0; i < 4; ++i){
      int ny = p.first + dy[i], nx = p.second + dx[i];
      //cout << "c[" << ny << "][" << nx << "] = " << c[ny][nx] << endl;
      //cout << "(ny,nx) = (" << ny << "," << nx << ")に移動できるか検証" << endl;

      //中村くんから教えてもらった技
      //条件に合ってないものはcontinue;することで見にくさを解消
      /***********************************************************/
      /*if( !(0 <= nx && nx < C && 0 <= ny && ny < R) ) continue;
      if(c[ny][nx] == '#') continue;*/
      /***********************************************************/

      if((0 <= nx && nx < C) && (0 <= ny && ny < R) && c[ny][nx] != '#' && d[ny][nx] == INF){
        //cout << "(ny,nx) = (" << ny << "," << nx << ")に移動" << endl;
        que.push(P(ny,nx));
        d[ny][nx] = d[p.first][p.second] + 1;
        //c[ny][nx] = '*';
        //cout << "d[" << ny << "][" << nx << "] = " << d[ny][nx] << endl;
      }
      //else cout << "(ny,nx) = (" << ny << "," << nx << ")に移動できない" << endl;
    }
    /*for(int i = 0; i < R; ++i){
      for(int j = 0; j < C; ++j){
        cout << c[i][j];
      }
      cout << endl;
    }
    cout << endl;
    for(int i = 0; i < R; ++i){
      for(int j = 0; j < C; ++j){
        cout << "d[" << i << "][" << j << "] = " << d[i][j] << endl;
      }
    }*/
  }
}
