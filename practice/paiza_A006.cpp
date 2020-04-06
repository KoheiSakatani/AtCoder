#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  int stage[200][200];
  int plot[N][2];
  bool stop_person[N];
  //-1は前人未踏
  rep(j,200){
    rep(i,200){
      stage[j][i] = -1;
    }
  }
  //x,y座標の順に入力
  rep(i,N){
    cin >> plot[i][0] >> plot[i][1];
    plot[i][1] += 99; plot[i][0] += 99;
    stage[plot[i][1]][plot[i][0]] = i+1;
    stop_person[i] = false;
    //cout << "plot[" << i << "][1] = " << plot[i][1] << "plot[" << i << "][0] = " <<  plot[i][0] << endl;
  }                        //右,上,左,下
  int t = 0,dx[4] = {1,0,-1,0}, dy[4] = {0,-1,0,1},mode = 0,c = 0;

  while(c != N){
    //cout << "t = " << t << endl;
    //cout << "mode = " << mode << endl;

    int k = 0;
    //getchar();
    //cout << "clear" << endl;
    vector<vector<int> > kouho(N,vector<int>(3));
    rep(i,N){
      //cout << i+1 << "さんはstage[" << plot[i][1] + dy[mode] << "][" << plot[i][0] + dx[mode] << "] = " << stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] << "に移動したい" << endl;
      //if(stop_person[i]) cout << i+ 1 << "さんはこれ以上移動できない" << endl;
      //移動先が移動出来るマスか判定
      if(!stop_person[i] && stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] == -1){
        //plot[i][1] += dy[mode]; plot[i][0] += dx[mode];
        //cout << i+1 << "さんはstage[" << plot[i][1] + dy[mode] << "][" << plot[i][0] + dx[mode] << "] = " << stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] << "に移動したい" << endl;
        kouho[k][0] = i+1;
        kouho[k][2] = plot[i][0] + dx[mode];
        kouho[k][1] = plot[i][1] + dy[mode];
        k++;
      }
      //移動先が元々自分のいたマスか判定
      else if(!stop_person[i] && stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] == i+1){
        mode--; if(mode == -1) mode = 3;
        //cout << "移動できなかったので" << i+1 << "さんはstage[" << plot[i][1] + dy[mode] << "][" << plot[i][0] + dx[mode] << "] = " << stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] << "に移動したい" << endl;
        kouho[k][0] = i+1;
        kouho[k][2] = plot[i][0] + dx[mode];
        kouho[k][1] = plot[i][1] + dy[mode];
        k++;
        //移動先が自分以外の小人がいたマスか判定
        if(!stop_person[i] && stage[plot[i][1] + dy[mode]][plot[i][0] + dx[mode]] != -1){
          //cout << "移動先がなくなったので";
          //cout << i+1 <<"さんはこれ以上移動できない" << endl;
          stop_person[i] = true;
          c++;
          //cout << "c = "<< c << endl;
        }
      }
    }
    //移動先のマスに複数の小人が来てたら停止
    /*rep(i,k){
      cout << kouho[i][0] << " " << kouho[i][1] << " " << kouho[i][2] << endl;
    }*/
    rep(i,k-1){
      for(int j = i+1; j < k; ++j){
        if(kouho[i][1] == kouho[j][1] && kouho[i][2] == kouho[j][2]){
          //cout << "移動先が一致したので";
          //cout << i+1 <<"さんはこれ以上移動できない" << endl;
          //cout << j <<"さんはこれ以上移動できない" << endl;

          if(!stop_person[kouho[i][0]]) c++;
          stop_person[kouho[i][0]] = true;
          if(!stop_person[kouho[j][0]]) c++;
          stop_person[kouho[j][0]] = true;
        }
      }
    }
    //移動を行う
    k = 0;
    rep(i,N){
      if(!stop_person[i] && i+1 == kouho[k][0]){
        plot[i][1] = kouho[k][1]; plot[i][0] = kouho[k][2];
        stage[plot[i][1]][plot[i][0]] = i+1;
        k++;
      }
      //cout << "plot[" << i << "][1] = " << plot[i][1] << " plot[" << i << "][0] = " << plot[i][0] << endl;

    }
    t++;
    mode++; if(mode == 4) mode = 0;
    k = 0;
    kouho.clear();
  }
  cout << t-1 << endl;
  return 0;
}
