
#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;
/*
int ans = 0;

void dfs(vector<int> &RGB, vector<vector<int> > &seen, int idx, int n){
  cout << "idx = " << idx << " n = " << n << " ans = " << ans << endl;
  //ちょうど0になったらansをインクリメント
  if(n == 0){
    cout << "ちょうど0" << endl;
    ans++;
    getchar();
    return;
  }
  //インデックスが負の要素になったらreturn
  if(n-idx < 0){
    cout << "nが負の要素" << endl;
    return;
  }
  //既に訪問済みならreturn(メモ化再帰的な)
  if(seen[idx][n-idx] == true || seen[n-idx][idx] == true){
    cout << "訪問済み" << endl;
    return;
  }
  seen[idx][n-idx] = seen[n-idx][idx] = true;
  rep(i,3){
    dfs(RGB,seen,RGB[i],n-RGB[i]);
  }
  return;
}

int main(){
  int N;
  vector<int> RGB(3); cin >> RGB[0] >> RGB[1] >> RGB[2] >> N;
  vector<vector<int> > seen(N,vector<int>(N));

  rep(i,3){
    dfs(RGB,seen,RGB[i],N);
  }
  cout << ans << endl;
  return 0;
}
*/
int main(){
  int ans = 0;
  int N,R,G,B; cin >> R >> G >> B >> N;
  for(int r = 0;r <= N; ++r){
    for(int g = 0; g <= N; ++g){
      double tmp = N-r*R-g*G;
      //cout << N << "-" << r << "*" << R << "-" << g << "*" << G << " = " << tmp <<  endl;
      if(floor(tmp/B) == ceil(tmp/B) && tmp/B >= 0) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
