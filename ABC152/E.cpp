#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int N,A[100100];
ll sum = 0,t,r,x;
int main(){
  cin >> N;
  rep(i,N) cin >> A[i];
  t = A[0];
  rep(i,N-1){
    ll a = t, b = A[i+1];
    x = t * b;
    if(a < b){
      ll tmp = a;
      a = b;
      b = tmp;
    }
    r = a % b;
    while(r != 0){
      a = b;
      b = r;
      r = a % b;
    }
    t = x / b;
  }
  rep(i,N) sum += ((t/A[i])%(1000000007));
  cout << sum << endl;
  return 0;
}
