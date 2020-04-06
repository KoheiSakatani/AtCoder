#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
const int INF = 1<<29;
//入力
//Nは大問数、Gは目標点
int N,G;

int rec(int G, int min, vector<int>& p, vector<int>& s, vector<int>& c){
  /*cout << "min = " << min << endl;
  cout << "G = " <<  G << endl;
  for(int i = 0; i< N; ++i) cout << "c[" << i << "] = " << c[i] << endl;
  cout << endl;*/
  if(G <= 0){
    int tmp = 0;
    for(int i = 0; i < N; ++i) tmp += c[i];
    if(min > tmp) min = tmp;
    //int a; cin >> a;
    return min;
  }
  for(int i = 0; i < N; ++i){
    if( c[i] >= p[i]) continue;
    c[i]++;
    //大問の問題を全て解いたらボーナス
    if(c[i] == p[i]) G -= s[i];
    min = rec(G-100*(i+1),min,p,s,c);
    /*cout << "min = " << min << endl;
    cout << "G = " << G-100*(i+1) << endl;
    for(int j = 0; j< N; ++j) cout << "c[" << j << "] = " << c[j] << endl;*/
    if(c[i] == p[i]) G += s[i];
    c[i]--;

  }

  //int a; cin >> a;
  return min;
}

int main(){
  cin >> N >> G;

  int min = INF;
  //pは大問iの問題数の配列、sは大問iのコンプリートボーナスポイント
  vector<int> p(N),s(N);

  //解いた問題数のカウンタ
  vector<int> c(N,0);
  for(int i = 0; i < N; i++) cin >> p[i] >> s[i];

  for(int i = 0; i < N; ++i){
    c[i]++;
    if(c[i] == p[i]) G -= s[i];
    min = rec(G-100*(i+1),min,p,s,c);
    if(c[i] == p[i]) G += s[i];
    c[i]--;
  }
  cout << min << endl;
  return 0;
}
