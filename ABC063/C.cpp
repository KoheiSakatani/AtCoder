#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  int A[N],ans = 0,min_val = 0;
  rep(i,N){
    cin >> A[i];
    //ひく数は10の倍数でない数のうち最小？
    if(A[i] % 10 != 0){
      if(min_val == 0 || min_val > A[i]) min_val = A[i];  
    }
    ans += A[i];
    //cout << ans << endl;
  }
  if(ans % 10 == 0){
    ans -= min_val;
    if(ans % 10 == 0) ans = 0;
  }
  cout << ans << endl;
  return 0;
}
