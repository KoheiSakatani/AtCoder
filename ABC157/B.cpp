#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int a[3][3];
  rep(i,3) rep(j,3){
    cin >> a[i][j];
  }
  int N; cin >> N;
  int b[N];
  bool bingo[3][3];
  rep(i,3){
    rep(j,3){
      bingo[i][j] = false;
    }
  }
  rep(i,N){
    cin >> b[i];
    rep(j,3){
      rep(k,3){
        if(a[j][k] == b[i]) bingo[j][k] = true;
      }
    }
  }
  rep(i,3){
    if(bingo[i][0] && bingo[i][1] && bingo[i][2]){
      cout << "Yes" << endl;
      return 0;
    }
  }
  rep(i,3){
    if(bingo[0][i] && bingo[1][i] && bingo[2][i]){
      cout << "Yes" << endl;
      return 0;
    }
  }
  if(bingo[0][0] && bingo[1][1] && bingo[2][2]){
    cout << "Yes" << endl;
    return 0;
  }
  if(bingo[2][0] && bingo[1][1] && bingo[0][2]){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}
