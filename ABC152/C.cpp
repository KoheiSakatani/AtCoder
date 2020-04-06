#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

ll N,m = INF,c = 0;
ll P[200000];

int main(){
  cin >> N;
  rep(i,N) cin >> P[i];
  rep(i,N){
    if(m > P[i]){
      m = P[i];
      c++;
    }
  }
  cout << c << endl;
  return 0;
}
