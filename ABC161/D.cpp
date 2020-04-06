#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int K; cin >> K;
  ll num = 9;
  int d = 1;
  while(K > num){
    num *= 3;
    d++;
  }
  for(ll lunlun = pow(10,d); lunlun < pow(10,d+1); ++lunlun){

  }
  return 0;
}
