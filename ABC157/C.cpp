#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N, M; cin >> N >> M;
  int A[N] = {-1},ans = 0;
  rep(i,M){
    int d,num;
    cin >> d >> num;
    //左から1桁目が0ではないならあり得る数字
    if(d != 1 && num != 0){
      if(A[d-1] == -1 || A[d-1] == num ){
        A[d-1] = num;
      }
    }
    else if(N == 1){
      
    }
  }
  cout << ans << endl;
  return 0;
}
