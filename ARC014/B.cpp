#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  vector<string> W(N);
  vector<list<string> > L(26);
  rep(i,N){
    cin >> W[i];
    //これまでのしりとりで同じ言葉を発言していないかチェック
    for(list<string>::iterator itr = L[W[i][0]-96].begin(); itr != L[W[i][0]-96].end(); ++itr){
      if(*itr == W[i] && i % 2 == 1){
        cout << "WIN" << endl;
        return 0;
      }
      else if(*itr == W[i] && i % 2 != 1){
        cout << "LOSE" << endl;
        return 0;
      }
    }
    //前の言葉の語尾と今回発言した言葉の先頭が一致しているか
    if(W[i-1][W[i-1].length()-1] != W[i][0]){
      if(i % 2 == 1){
        cout << "WIN" << endl;
        return 0;
      }
      else if(i % 2 == 0){
        cout << "LOSE" << endl;
        return 0;
      }
    }
    L[W[i][0]-96].push_back(W[i]);
  }
  cout << "DRAW" << endl;
  return 0;
}
