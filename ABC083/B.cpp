#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,A,B,ans = 0; cin >> N >> A >> B;
  for(int i = 1; i <= N; ++i){
    int sum = 0,digit = log10(i), tmp = i;
    for(int j = 0; j <= digit; ++j){
      int b = pow(10,j+1);
      int c = pow(10,j);
      int a = (tmp%b)/c;
      sum += a;
      tmp -= (a*c);
    }
    if(sum >= A && sum <= B) ans += i;

  }
  cout << ans << endl;
  return 0;
}
