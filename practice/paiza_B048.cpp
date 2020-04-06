#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,M; cin >> N >> M;
  int b[N][N];
  bool p[N][N];
  rep(i,N){
    rep(j,N){
      cin >> b[i][j];
      p[i][j] = false;
    }
  }
  rep(i,M-1){
    bool f = false;
    int panch;
    cin >> panch;
    rep(j,N){
      rep(k,N){
        if(panch == b[j][k]){
          p[j][k] = true;
          f = true;
          break;
        }
      }
      if(f == true) break;
    }
  }
  int bingo_r[N],bingo_c[N];
  int bingo_x[2] = {0,0};
  int k[N*N][2];
  int count = 0, m = 0;
  rep(i,N){
    if(p[i][i]) bingo_x[0]++;
    if(p[i][N-1-i]) bingo_x[1]++;
    bingo_r[i] = 0;
    bingo_c[i] = 0;
    rep(j,N){
      if(p[i][j]) bingo_r[i]++;
      if(p[j][i]) bingo_c[i]++;
      if(!p[i][j]){
        k[count][0] = i; k[count][1] = j;
        count++;
      }
    }
  }
  rep(i,2) if(bingo_x[i] == N) m++;
  rep(i,N){
    if(bingo_c[i] == N) m++;
    if(bingo_r[i] == N) m++;
  }

  int f_m = m;
  rep(i,count){
    bool f = false;
    int tmp = f_m;
    if(k[i][0] == k[i][1] && (bingo_x[0] + 1 == N)){
      tmp++;
    }
    if(k[i][0] == k[i][1] && (bingo_x[1] + 1 == N)){
      tmp++;
      f = true;
    }
    if(!f && (k[i][0]+k[i][1] == N-1) && (bingo_x[1]+1 == N)){
      tmp++;
    }
    if(bingo_r[k[i][0]]+1 == N){
      tmp++;
    }
    if(bingo_c[k[i][1]]+1 == N){
      tmp++;
    }
    if(m < tmp) m = tmp;
  }
  cout << m << endl;
  return 0;
}
