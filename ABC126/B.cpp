#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int N,K; cin >> N >> K;
  double prob = 0;
  rep(i,N){
    int score = i+1,toss = 0;
    while(score<K){
      toss++;
      score = score*2;
    }
    prob += pow(0.5,toss);
    //cout << "prob = " << prob << "toss = " << toss << endl;
  }
  double ans = prob/(double)N;
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
