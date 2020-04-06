#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

bool rev(vector<vector<int> > &m, int turn, int y, int x, int dy, int dx){
  bool non_rev = false;
  if(((y + dy) < 0 || (y + dy) >= 8) || ((x + dx) < 0 || (x + dx) >= 8)){
    non_rev = true;
    return non_rev;
  }
  else if(m[y + dy][x + dx] == turn){
    //cout << "m[" << y + dy << "][" << x + dx << "] = " << m[y+dy][x+dx] << "は返せない" << endl;
    return non_rev;
  }
  else if(m[y + dy][x + dx] == 0){
    non_rev = true;
    return non_rev;
  }else{
    non_rev = rev(m,turn,y+dy,x+dx,dy,dx);
    if(non_rev == false) m[y+dy][x+dx] = turn;
    return non_rev;
  }
}

int main(){
  int N; cin >> N;
  int dy[8] = {-1,-1,0,1,1,1,0,-1}, dx[8] = {0,-1,-1,-1,0,1,1,1};
  vector<vector<int> > m(8,vector<int>(8));
  //0は空きマス,1は黒,2は白がそれぞれ置かれているとする
  rep(i,8){
    rep(j,8){
      m[j][i] = 0;
    }
  }
  //リバーシの初期配置
  //盤面はm[y座標][x座標]になっている
  m[3][3] = 2;  m[3][4] = 1; m[4][3] = 1; m[4][4] = 2;
  //m[5][4] = 1;
  rep(i, N){
    //cout << "i = " << i << endl;
    //ログを取得しながらシミュレート
    char log;
    int y,x,turn;
    bool non_rev;
    //cout << "clear" << endl;
    cin >> log >> y >> x;
    y--; x--;
    if(log == 'B') turn = 1;
    else turn = 2;
    m[y][x] = turn;
    //cout << "m[" << y << "][" << x << "]にリバーシをおいた" << endl;
    rep(j,8){
      if(((y + dy[j]) < 0 || (y + dy[j]) >= 8) || ((x + dx[j]) < 0 || (x + dx[j]) >= 8)) continue;
      //cout << "m[" << y + dy[j] << "][" << x + dx[j] << "] = " << m[y+dy[j]][x+dx[j]] << endl;

      rev(m,turn,y,x,dy[j],dx[j]);
    }
    rep(k,8){
      rep(l,8){
        cout << m[l][k];
        if(l != 8) cout << " ";
      }
      cout << endl;
    }
    cout << endl;

  }

  int B = 0, W = 0;
  rep(i,8){
    rep(j,8){
      if(m[j][i] == 1) B++;
      else if(m[j][i] == 2) W++;
    }
  }
  if(B < 10) cout << "0";
  cout << B << "-";
  if(W < 10) cout << "0";
  cout << W;
  if(B > W) cout << "The black won!" << endl;
  else if(B < W) cout << "The white won!" << endl;
  return 0;
}
