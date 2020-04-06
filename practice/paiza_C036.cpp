#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

int main(){
  //１回戦の各プレイヤーのスコア
  vector<int> s(4);
  //決勝戦のスコア
  vector<int> f(2);
  //決勝に出るプレイヤー
  vector<int> f_p(2);
  //1回戦の組み合わせ
  vector<vector<int> > c(2,vector<int>(2));

  //入力
  cin >> c[0][0] >> c[0][1];
  cin >> c[1][0] >> c[1][1];
  rep(i,4) cin >> s[i];
  rep(i,2) cin >> f[i];
  //タイムが早い方が決勝
  if(s[c[0][0]-1] < s[c[0][1]-1]) f_p[0] = c[0][0];
  else f_p[0] = c[0][1];
  if(s[c[1][0]-1] < s[c[1][1]-1]) f_p[1] = c[1][0];
  else f_p[1] = c[1][1];
  //プレイヤーを昇順に並べ替え
  if(f_p[0] > f_p[1]){
    int tmp = f_p[0];
    f_p[0] = f_p[1];
    f_p[1] = tmp;
  }
  //優勝者と準優勝者の発表
  if(f[0] < f[1]){
    cout << f_p[0] << endl;
    cout << f_p[1] << endl;
  }
  else{
    cout << f_p[1] << endl;
    cout << f_p[0] << endl;
  }
  return 0;
}
