#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  vector<int> t(N),x(N),y(N);
  rep(i,N){
    cin >> t[i] >> x[i] >> y[i];
  }
  int current_x = 0, current_y = 0,current_t = 0;
  rep(i,N){
    //そもそもそこに行くまでに時間が足りているか確認
    int move = abs(x[i]-current_x)+abs(y[i]-current_y);
    int move_t = t[i] - current_t;
    //cout << "move = " << move << " move_t = " << move_t << endl;
    if(move <= move_t){
      if(move%2 != move_t%2){
        cout << "No" << endl;
        return 0;
      }
    }else{
      cout << "No" << endl;
      return 0;
    }
    current_x = x[i]; current_y = y[i]; current_t = t[i];
  }
  cout << "Yes" << endl;
  return 0;
}
