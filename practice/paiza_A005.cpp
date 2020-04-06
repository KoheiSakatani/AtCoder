#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int main(){
  //aはフレーム数、bはピンの数、nは投球数
  int a, b, n;
  //総合得点
  int total_score = 0;
  cin >> a >> b >> n;
  //最終フレームを除いた各フレームのスコア
  vector<vector<int> > scores(a-1,vector<int>(2));
  //ストライクボーナス
  vector<int> strike_c(a,3);
  int c = 0;
  string sc;
  rep(i,a-1){
    cin >> sc;
    c++;
    if(sc[0] == 'G') scores[i][0] = 0;
    else scores[i][0] = atoi(sc.c_str());
    if(scores[i][0] == b){
      scores[i][1] = 0;
      continue;
    }
    cin >> sc;
    c++;
    if(sc[0] == 'G') scores[i][1] = 0;
    else scores[i][1] = atoi(sc.c_str());
  }
  vector<int> l_sc(n-c);
  //最終フレームのスコア入力
  rep(i,n-c){
    cin >> sc;
    if(sc[0] == 'G') l_sc[i] = 0;
    else l_sc[i] = atoi(sc.c_str());
  }
  bool sp_f = false;

  rep(i,a-1){
    //このフレームで倒した本数をスコアとする
    total_score += scores[i][0] + scores[i][1];
    //前フレームでスペアをとったならスペアボーナス
    if(sp_f == true){
      total_score += scores[i][0];
      sp_f = false;
    }
    //ストライクボーナスが加算されていなければ加算
    if(i > 0 && strike_c[i-1] <= 2){
      total_score += scores[i][0];
      strike_c[i-1]--;
      if(strike_c[i-1] == 0) strike_c[i-1] = 3;
    }
    if(i > 1 && strike_c[i-2] <= 2){
      total_score += scores[i][0];
      strike_c[i-2]--;
      if(strike_c[i-2] == 0) strike_c[i-2] = 3;
    }
    //そのフレームの1投目でストライクをとったなら以下の処理はしない
    if(scores[i][0] == b){
      strike_c[i] = 2;
      continue;
    }
    //ストライクボーナスが加算されていなければ加算
    if(i > 0 && strike_c[i-1] <= 2){
      total_score += scores[i][1];
      strike_c[i-1]--;
      if(strike_c[i-1] == 0) strike_c[i-1] = 3;
    }
    if(i > 1 && strike_c[i-2] <= 2){
      total_score += scores[i][1];
      strike_c[i-2]--;
      if(strike_c[i-2] == 0) strike_c[i-2] = 3;
    }
    //2投目でちょうどb本倒したらスペア
    if(scores[i][0] + scores[i][1] == b) sp_f = true;
  }
  int lf_sc = 0, ls_c = 3;
  //最終フレームの処理
  rep(i,n-c){

    //スコアに倒したピンの数を加算
    total_score += l_sc[i];
    lf_sc += l_sc[i];

    //このフレームの1投目も2投目もストライクならストライクボーナス
    if(lf_sc == 2*b) total_score += l_sc[i];

    //前のフレームでスペアだったらスペアボーナス
    if(sp_f == true){
      total_score += l_sc[i];
      sp_f = false;
    }
    //ストライクボーナスが加算されていないなら加算
    if(strike_c[(a-1)-2] < 2){
      strike_c[(a-1)-2]--;
      total_score += l_sc[i];
      if(strike_c[(a-1)-2] == 0) strike_c[(a-1)-2] = 3;
    }
    if(strike_c[(a-1)-1] <= 2){
      strike_c[(a-1)-1]--;
      total_score += l_sc[i];
      if(strike_c[(a-1)-1] == 0) strike_c[(a-1)-1] = 3;
    }
    //最終フレームの1投目でストライクなら2投目以降はストライクボーナス
    if(ls_c < 2){
      total_score += l_sc[i];
      ls_c++;
      //2投目もストライクなら以下の処理はしない
      if(l_sc[i] == b) continue;
    }

    //1投目がストライクなら以下の処理はしない
    if(l_sc[i] == b){
      ls_c = 0;
      continue;
    }
    //スペア
    if(lf_sc == b){
      sp_f = true;
    }

  }

  cout << total_score << endl;
  return 0;
}
