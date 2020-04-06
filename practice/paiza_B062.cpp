#include <iostream>
#include <vector>
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
  //Nは秒数、H,Wはそれぞれ部屋の縦と横の長さ
  int N,H,W;
  cin >> N;
  cin >> H >> W;
  //sはi行j列のマス目の状態を格納
  vector<vector<char> > s(H,vector<char>(W));

  rep(i,H) rep(j,W) cin >> s[i][j];

  //左上(x,y) = (0,0)からスタート
  //dは汚れたマスを掃除した回数
  int x = 0, y = 0,d = 0;
  int t = 0; //0は右、1は下、2は左、3は上にそれぞれ進む
  rep(i,N){
    if(s[x][y] == '#') d++;
    s[x][y] = '*';
    //そのまま進むと壁に当たるもしくは訪問済みのマスに再訪問するときの処理
    if(t == 0 && y + 1 != W && s[x][y + 1] != '*') y++;
    else if(t == 0 && (y + 1 == W || s[x][y+1] == '*')){
      t = 1;
      x++;
    }
    else if(t == 1 && x + 1 != H && s[x+1][y] != '*') x++;
    else if(t == 1 && (x + 1 == H || s[x+1][y] == '*')){
      t = 2;
      y--;
    }
    else if(t == 2 && y - 1 != -1 && s[x][y - 1] != '*') y--;
    else if(t == 2 && (y - 1 == -1 || s[x][y-1] == '*')){
      t = 3;
      x--;
    }
    else if(t == 3 && x - 1 != -1 && s[x-1][y] != '*') x--;
    else if(t == 3 && (y - 1 == -1 || s[x-1][y] == '*')){
      t = 0;
      y++;
    }
  }
  //掃除マスを出力
  cout << d << endl;
  return 0;
}
