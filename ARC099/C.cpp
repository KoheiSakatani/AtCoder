#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int  main(){
  int N, K; cin >> N >> K;
  int A[N];
  int ans = 0;
  rep(i,N) cin >> A[i];
  if(N == K) ans = 1;
  else if((N+(N/K))%K != 0) ans = (N+N/K)/K + 1;
  else if(N+(N/K)%K == 0) ans = (N+N/K)/K;
  cout << ans << endl;
  return 0;
}
