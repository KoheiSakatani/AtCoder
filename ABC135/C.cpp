#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

ll N, m[100010],y[100010];
ll sum = 0;
int main(){
  cin >> N;
  rep(i,N+1) cin >> m[i];
  rep(i,N) cin >> y[i];
  m[N+1] = 0;
  rep(i,N+1){
    if(m[i] <= y[i]){
      sum += m[i];
      y[i] -= m[i];
      if(m[i+1] <= y[i]){
        sum += m[i+1];
        m[i+1] = 0;
      }else{
        sum += y[i];
        m[i+1] -= y[i];
      }
    }
    else sum += y[i];
  }
  cout << sum << endl;
  return 0;
}
