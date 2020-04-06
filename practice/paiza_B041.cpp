#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

int main(){
  //最初の正方形の長さN,作業を繰り返す回数K
  int N,K;
  //入力
  cin >> K >> N;
  int count = N;
  //最大でどれだけの大きさの模様になるか
  rep(k,K){
    count *= count;
  }
  //模様を格納するs
  //格納した模様で作った模様をmに格納
  vector<vector<char> > s(count);
  vector<vector<char> > m(count);
  rep(i,N){
    rep(j,N){
      char tmp;
      cin >> tmp;
      s[i].push_back(tmp);
    }
  }
  count = N;
  rep(k,K){
    rep(i,count){
      rep(j,count){
        //#なら元の模様をmに格納
        if(s[i][j] == '#'){
          rep(ii,count){ rep(jj,count) m[i*count+ii].push_back(s[ii][jj]); }
        }
        //.なら全て.
        else if(s[i][j] == '.'){
          rep(ii,count){ rep(jj,count) m[i*count+ii].push_back('.'); }
        }
      }
    }
    count *= count;
    s = m;
    rep(i, m.size()) m[i].erase(m[i].begin(),m[i].end());
  }
  rep(i,count){
    rep(j,count){
      cout << m[i][j];
    }
    cout << endl;
  }
  return 0;
}
