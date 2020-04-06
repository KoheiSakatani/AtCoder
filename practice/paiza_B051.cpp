#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

const long long INF = 1LL << 60;

int main(){
  //マスの大きさN
  int N, sum = 0;
  cin >> N;
  vector<vector<int> > m(N,vector<int>(N));
  vector<bool> check(N*N+1,false);

  //入力
  for(int i = 0; i < N; ++i){
    int s = 0;
    for(int j = 0; j < N; ++j){
      cin >> m[i][j];
      if(m[i][j] != 0) check[m[i][j]] = true;
      s += m[i][j];
      sum = max(s,sum);
    }
  }
  //入力されてない数字をチェック
  vector<int> factor;
  for(int i = 1; i <= N*N; ++i){
    if(!check[i]) factor.push_back(i);
  }
  int k = 0;
  //魔法陣に数字を入力
  while(k < 2){
    rep(i,N){
      int s = 0;
      bool zero_f = false;
      vector<int> idx;
      rep(j,N){
        //見えなくなった数を入れてみる
        if(m[i][j] == 0 && zero_f == false){
          idx.push_back(i); idx.push_back(j);
          s += factor[k];
          zero_f = true;
        }
        else if(m[i][j] != 0) s += m[i][j];
      }

      //足した総和が等しいなら見えなくなった文字を復元
      if(s == sum && zero_f == true){
        m[idx[0]][idx[1]] = factor[k];
        k++;
      }
    }


    rep(i,N){
      int s = 0;
      bool zero_f = false;
      vector<int> idx;
      rep(j,N){
        if(m[j][i] == 0 && zero_f == false){
          idx.push_back(j); idx.push_back(i);
          s += factor[k];
          zero_f = true;
        }
        else if(m[j][i] != 0) s += m[j][i];
      }
      if(s == sum && zero_f == true){
        m[idx[0]][idx[1]] = factor[k];
        k++;
      }
    }
  }

  rep(i,N){
    rep(j,N){
      cout << m[i][j];
      if(j != N-1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
