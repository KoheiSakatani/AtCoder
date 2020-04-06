#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N; cin >> N;
  vector<int> X(N,0);
  double ave;
  int sum = 0, ans = 0;
  rep(i,N){
    cin >> X[i];
    sum += X[i];
  }
  ave = (double)sum / (double)N;
  int floor_ave = round(ave);
  rep(i,N){
    ans += pow(X[i]-floor_ave,2);
  }
  cout << ans << endl;
  return 0;
}
